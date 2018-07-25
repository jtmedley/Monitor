// Open and configure UART
// Read and print data stream


#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <termios.h>

int main()
{


// Open UART from port
// Using upper corner USB position, unsure if relevant

	int stream = -1;
	stream = open("../../../dev/ttyACM0", O_RDWR | O_NOCTTY | O_NDELAY);
	if (stream == -1) 
	{
		printf("Error opening stream\n");
		exit(1);
	}

// Configure UART

	struct termios options;
	tcgetattr(stream, &options);
	options.c_cflag = B115200 | CS8 | CLOCAL | CREAD ; // Baud rate B####, number of bits CS#
	options.c_iflag = IGNPAR; // IGNPAR ignores parity errors
	options.c_oflag = 0;
	options.c_lflag = 0;
	tcflush(stream, TCIFLUSH);
	tcsetattr(stream, TCSANOW, &options);

// Write to data stream - started for later
/*
	unsigned char buffer[0];
	unsigned char *bufferPtr

*/

// Read data stream

	if (stream != -1)
	{
		unsigned char rxBuffer[256]; // Message will be stored
		unsigned char rxReadChar; // Current character being read
		int ii=0;   // Total characters read
	        while(1)
		{
			int rxRead = read(stream, (void *)(&rxReadChar), 1);
			if (rxRead == 0)
			{
//				printf("Error: No data waiting\n");
			}
			else if (rxReadChar!='\n')
			{
				rxBuffer[ii++]=rxReadChar;
			}
			else
			{
			// Print data stream

				printf("The message is:\n\n%s\n",rxBuffer);
				printf("Stream contains %i characters\n",ii);
				for (int ij=0; ij<256; ij++)
				{
					rxBuffer[ij]=0;
				}
				ii=0;
			}
		}
	}
	// Close stream
	close(stream);

}
