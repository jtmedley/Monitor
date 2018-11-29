/**
 *  @example vent_test_read.cpp
 */

#include "VentSerial.h"
#include "Locations.h"

#include <cstring>
#include <cstdlib>
#include <iostream>
#include <unistd.h>

using namespace LibSerial;

/**
 * @brief This example demonstrates configuring a serial port and 
 *        reading serial data.
 */
int main()
{
    // Instantiate a SerialPort object.
    VentSerial vent_test;

    // Open the Serial Port at the desired hardware port.
    vent_test.mVentPort.Open(StreamLocation);

    // Set the baud rate of the serial port.
    vent_test.mVentPort.SetBaudRate(BaudRate::BAUD_115200);

    // Set the number of data bits.
    vent_test.mVentPort.SetCharacterSize(CharacterSize::CHAR_SIZE_8);

    // Turn off hardware flow control.
    vent_test.mVentPort.SetFlowControl(FlowControl::FLOW_CONTROL_NONE);

    // Disable parity.
    vent_test.mVentPort.SetParity(Parity::PARITY_NONE);
    
    // Set the number of stop bits.
    vent_test.mVentPort.SetStopBits(StopBits::STOP_BITS_1);
    
    // Wait for data to be available at the serial port.
    while(!vent_test.mVentPort.IsDataAvailable()) 
    {
        usleep(1000);
    }

    // Timeout value in milliseconds to wait for data being read.
    size_t ms_timeout = 250;

    // Char variable to store data coming from the serial port.
    char data_byte;

    // Read one byte from the serial port and print it to the terminal.
    try
    {
        // Read a single byte of data from the serial port.
        vent_test.mVentPort.ReadByte(data_byte, ms_timeout);

        // Show the user what is being read from the serial port.
        std::cout << data_byte << std::flush;
    }
    catch (ReadTimeout)
    {
        std::cerr << "\nThe ReadByte() call has timed out." << std::endl;
    }

    // Wait a brief period for more data to arrive.
    usleep(1000);

    DataBuffer read_buffer;

    try
    {
        // Read as many bytes as are available during the timeout period.
        vent_test.mVentPort.Read(read_buffer, 0, ms_timeout);
    }
    catch (ReadTimeout)
    {
        for (size_t i = 0; i < read_buffer.size(); i++)
        {
            std::cout << read_buffer.at(i) << std::flush;
        }

        std::cerr << "The Read() call timed out waiting for additional data." << std::endl;
    }

    // Successful program completion.
    std::cout << "The example program successfully completed!" << std::endl;
    return EXIT_SUCCESS;
}