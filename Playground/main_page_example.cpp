/**
 *  @example main_page_example.cpp
 */

#include <SerialPort.h>
#include <SerialStream.h>

using namespace LibSerial;

int main()
{
   // Instantiate a Serial Port and a Serial Stream object.
   SerialPort serial_port;
   SerialStream serial_stream;

   // Open the hardware serial ports.
   serial_port.Open( "/dev/ttyUSB0" );
   serial_stream.Open( "/dev/ttyUSB1" );

   // Set the baud rates.
   serial_port.SetBaudRate( BaudRate::BAUD_115200 );
   serial_stream.SetBaudRate( BaudRate::BAUD_115200 );

   char write_byte_1 = 'a';
   char write_byte_2 = 'b';

   char read_byte_1 = 'A';
   char read_byte_2 = 'B';

   // Write a character.
   serial_port.WriteByte(write_byte_1);
   serial_stream << write_byte_2;

   size_t timeout_milliseconds = 5;

   try
   {
      // Read a character.
      serial_port.ReadByte(read_byte_1, timeout_milliseconds);
      serial_stream >> read_byte_2;
   }
   catch (ReadTimeout)
   {
     std::cerr << "The Read() call has timed out." << std::endl;
   }

   std::cout << "serial_port read:   " << read_byte_1 << std::endl;
   std::cout << "serial_stream read: " << read_byte_2 << std::endl;

   // Close the Serial Port and Serial Stream.
   serial_port.Close();
   serial_stream.Close();
}