/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConfigForVentModel.cpp
 * Author: Medley
 * 
 * This is the ConfigForVentModel class file. 
 * 
 * Created on July 16, 2018, 9:16 PM
 */

// Check how includes work with each other? Could possibly save time?
#include <ConfigForVentModel.h>
#include <VentFunctions.h>

// Constructor with no arguments
// Should OpenStream be called inside constructor? Always needed but probably not
ConfigForVentModel::ConfigForVentModel() {
    // Default Servo-I
    Vent = S;
    // Does options need to be declared?
    options;
    stream = -1;
    int RxSuccess = -1;
    //stream = ConfigForVentModel::OpenStream();
}

// Constructor with VentName argument
// Should OpenStream be called inside constructor? Always needed but probably not
ConfigForVentModel::ConfigForVentModel(VentName VName) {
    //ConfigForVentModel::CheckForVents(Vent);
    Vent = VName;
    // Does options need to be declared?
    options;
    stream = -1;
    // RxSuccessto be done later?
    int RxSuccess = -1;
    //stream = ConfigForVentModel::OpenStream();
}

// Copy Constructor
// Is this ok as is?
ConfigForVentModel::ConfigForVentModel(const ConfigForVentModel& orig) {
}

// Destructor
// Is this ok as is? outside variables in 
ConfigForVentModel::~ConfigForVentModel() {
}

// Opens stream for manipulation by vent functions
// Needs close stream function associated - must always be closed
ConfigForVentModel::OpenStream() {
	stream = open(StreamLocation, O_RDWR | O_NOCTTY | O_NDELAY);
	if (stream == -1) 
	{
		/* Error handling
                 * Old code:
                 * printf("Error opening stream\n");
                 * exit(1);
                 */
	}
}

// Checks if enumerated VentName is used
// Might have been made irrelevant when switched to enumerated VentName over character?
// Would need to be changed for additional vents***
ConfigForVentModel::CheckForVents() {
    if(!(Vent == S || Vent == B || Vent == D || Vent == E || Vent == H || Vent == M))
    {
     // error handling throw here   
    }
}

ConfigForVentModel::VentOptions() {
    // Loads current attributes from open stream
    tcgetattr(stream, &options);
    // Default error handling needed? Should always be associated with CheckForVents() so maybe not?
    // Sets ventilator-specific control flags
    // Would need to be changed for additional vents***
    switch (Vent) {
        case (S):
        {
            options.c_cflag = B9600 | CS8 | CLOCAL | CREAD | PARENB ;
            break;
        }
        case (B):
        {
            options.c_cflag = B38400 | CS8 | CLOCAL | CREAD | PARENB ;
            break;
        }
        case (D):
        {
            options.c_cflag = B19200 | CS7 | PARODD | CLOCAL | CREAD | PARENB | PARODD;
            break;
        }
        case (E):
        {
            options.c_cflag = B38400 | CS8 | CLOCAL | CREAD | PARENB;
            break;
        }
        case (H):
        {
            options.c_cflag = B38400 | CS8 | CLOCAL | CREAD ;
            break;
        }
        case (M):
        {
            options.c_cflag = B38400 | CS8 | CLOCAL | CREAD | PARENB;
            break;
        }
    }
    // Sets universal input, output, and local flags
    options.c_iflag = IGNPAR; // IGNPAR ignores parity errors, not parity itself
    options.c_oflag = 0;
    options.c_lflag = 0;
    // Discards data written but not transmitted or received but not read
    tcflush(stream, TCIFLUSH);
    // Sets terminal parameters from options structure
    tcsetattr(stream, TCSANOW, &options);
}

// Function to attempt each vent setting file in sequence and check for data that males sense
// Loops through vent settings until success
// Once vent is found, enumerated VentName Vent can be set, other functions work
// To be modified in the future?
// Would need to be changed for additional vents***
// Check for good data will make RxSuccess == 0;
ConfigForVentModel::FindVent() {
    options = VentS(options,stream);
    // Check for good data
    if (RxSuccess == -1) {
        options = VentB(options,stream);
        // Check for good data
        if (RxSuccess == -1) {
            options = VentD(options,stream);
            // Check for good data
            if (RxSuccess == -1) {
                options = VentE(options,stream);
                // Check for good data
                if (RxSuccess == -1) {
                    options = VentH(options,stream);
                    // Check for good data
                    if (RxSuccess == -1) {
                        options = VentM(options,stream);
                        // Check for good data
                        if (RxSuccess == -1) {
                            // Throw error or repeat search?
                        }
                        else Vent = M;
                    }
                    else Vent = H;
                }
                else Vent = E;
            }
            else Vent = D;
        }
        else Vent = B;
    }
    else Vent = S;
}