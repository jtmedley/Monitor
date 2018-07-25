

// Genie commands & replys:

#define GENIE_ACK       0x06
#define GENIE_NAK       0x15

#define TIMEOUT_PERIOD  500
#define RESYNC_PERIOD   100

#define GENIE_READ_OBJ          0
#define GENIE_WRITE_OBJ         1
#define GENIE_WRITE_STR         2
#define GENIE_WRITE_STRU        3
#define GENIE_WRITE_CONTRAST    4
#define GENIE_REPORT_OBJ        5
#define GENIE_REPORT_EVENT      7

// Objects
//  the manual says:
//      Note: Object IDs may change with future releases; it is not
//      advisable to code their values as constants.

#define GENIE_OBJ_DIPSW         0
#define GENIE_OBJ_KNOB          1
#define GENIE_OBJ_ROCKERSW      2
#define GENIE_OBJ_ROTARYSW      3
#define GENIE_OBJ_SLIDER        4
#define GENIE_OBJ_TRACKBAR      5
#define GENIE_OBJ_WINBUTTON     6
#define GENIE_OBJ_ANGULAR_METER 7
#define GENIE_OBJ_COOL_GAUGE    8
#define GENIE_OBJ_CUSTOM_DIGITS 9
#define GENIE_OBJ_FORM          10
#define GENIE_OBJ_GAUGE         11
#define GENIE_OBJ_IMAGE         12
#define GENIE_OBJ_KEYBOARD      13
#define GENIE_OBJ_LED           14
#define GENIE_OBJ_LED_DIGITS    15
#define GENIE_OBJ_METER         16
#define GENIE_OBJ_STRINGS       17
#define GENIE_OBJ_THERMOMETER   18
#define GENIE_OBJ_USER_LED      19
#define GENIE_OBJ_VIDEO         20
#define GENIE_OBJ_STATIC_TEXT   21
#define GENIE_OBJ_SOUND         22
#define GENIE_OBJ_TIMER         23
#define GENIE_OBJ_SPECTRUM      24
#define GENIE_OBJ_SCOPE         25
#define GENIE_OBJ_TANK          26
#define GENIE_OBJ_USERIMAGES    27
#define GENIE_OBJ_PINOUTPUT     28
#define GENIE_OBJ_PININPUT      29
#define GENIE_OBJ_4DBUTTON      30
#define GENIE_OBJ_ANIBUTTON     31
#define GENIE_OBJ_COLORPICKER   32
#define GENIE_OBJ_USERBUTTON    33

// Structure to store replys returned from a display

#define     GENIE_FRAME_SIZE    6

#define ERROR_NONE          0
#define ERROR_TIMEOUT       -1  // 255  0xFF
#define ERROR_NOHANDLER     -2  // 254  0xFE
#define ERROR_NOCHAR        -3  // 253  0xFD
#define ERROR_NAK           -4  // 252  0xFC
#define ERROR_REPLY_OVR     -5  // 251  0xFB
#define ERROR_RESYNC        -6  // 250  0xFA
#define ERROR_NODISPLAY     -7  // 249  0xF9
#define ERROR_BAD_CS        -8  // 248  0xF8

#define GENIE_LINK_IDLE         0
#define GENIE_LINK_WFAN         1 // waiting for Ack or Nak
#define GENIE_LINK_WF_RXREPORT  2 // waiting for a report frame
#define GENIE_LINK_RXREPORT     3 // receiving a report frame
#define GENIE_LINK_RXEVENT      4 // receiving an event frame
#define GENIE_LINK_SHDN         5

#define GENIE_EVENT_NONE    0
#define GENIE_EVENT_RXCHAR  1

#ifndef        TRUE
#define        TRUE        (1==1)
#define        FALSE        (!TRUE)
#endif

#define NO_RESPONSE     0

#define     GENIE_FRAME_SIZE    6
// Structure to store replys returned from a display
struct genieFrameReportObj {
    uint8_t     cmd;
    uint8_t     object;
    uint8_t     index;
    uint8_t     data_msb;
    uint8_t     data_lsb;
};
/////////////////////////////////////////////////////////////////////
// The Genie frame definition
//
// The union allows the data to be referenced as an array of uint8_t
// or a structure of type genieFrameReportObj, eg
//
//  genieFrame f;
//  f.bytes[4];
//  f.reportObject.data_lsb
//
//  both methods get the same byte
//
union genieFrame {
    uint8_t             bytes[GENIE_FRAME_SIZE];
    genieFrameReportObj reportObject;
};
#define MAX_GENIE_EVENTS    16  // MUST be a power of 2
struct genieEventQueueStruct {
    genieFrame  frames[MAX_GENIE_EVENTS];
    uint8_t     rd_index;
    uint8_t     wr_index;
    uint8_t     n_events;
};
 
typedef void        (*genieUserEventHandlerPtr) (void); 

class Mbed4dGenie{
    public:
    
    typedef enum{
        CommIdle = 0,
        CommInProgress = 1
        }CommState;
    
    /*
        Constructor to initialise the pins used to control the lcd screen
        Note: When the class is first initialised, the lcd screen will be put
        in reset and kept reset until Start() is called
    */
    Mbed4dGenie(PinName TxPin,PinName RxPin, PinName resetpin);
    Mbed4dGenie(PinName TxPin,PinName RxPin, PinName resetpin,uint32_t baud);
    /*
        Deassert the reset pin and give some time to the lcd to 
        initialise itself before sending any commands.
    */
    void    Start();
    void    Restart();// todo: topheradded. Maybe delete
    void    Reset(void);
    /*
        Generic command to write data to a Genie object
        returns the status code of operation
    */
    int8_t  genieWriteObject (uint16_t object, uint16_t index, uint16_t data); 
    int8_t  genieWriteStr (uint16_t index, char *string);
    int8_t  genieReadObj (uint16_t object, uint16_t index);
      
    bool    genieDequeueEvent(genieFrame * buff);
    void    genieAttachEventHandler (genieUserEventHandlerPtr handler);
    void    genieDetachEventHandler (genieUserEventHandlerPtr handler); //Topher added
    bool    PendingFrames(void);
    
    uint16_t genieGetEventData (genieFrame * e); //added by to read value of object (combine MSB and LSB in a single variable)
    
    private:   
    void    writec(char data); 
    void    RxIrqHandler(void);
    void    ManageReceiveData(char data);
    bool    _genieEnqueueEvent (uint8_t * data);
    void    _genieFlushEventQueue(void);
    /*
        Wait for the screen to aknowledge the command
        returns the status code of operation
    */
    int8_t  WaitForAnswer();
    bool    WaitForIdle(); 
    int8_t  WaitForReadAnswer();  
    
    //////////////////////////////////////////////////////////////
    // A structure to hold up to MAX_GENIE_EVENTS events receive
    // from the display
    //
    genieEventQueueStruct _genieEventQueue;
    uint8_t     rxframe_count;
    uint8_t     rx_data[GENIE_FRAME_SIZE];
    uint8_t     checksum;
    //////////////////////////////////////////////////////////////
    // Pointer to the user's event handler function
    //
    genieUserEventHandlerPtr _genieUserHandler;
    
    RawSerial          _screen;
    DigitalOut      _reset;
    Timer           _waitTimer,_receptionTimer;
    int             state; 
    int             LastResponse; 
    long            RxMaxTimeout;
    long            RxStateTimeoutErrors;
    };