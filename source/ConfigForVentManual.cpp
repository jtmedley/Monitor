/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConfigForVentManual.cpp
 * Author: Medley
 * 
 * Created on July 16, 2018, 9:16 PM
 */

#include <ConfigForVentManual.h>
#include <VentFunctions.h>

ConfigForVentManual::OpenStream() {
	stream = open(StreamLocation, O_RDWR | O_NOCTTY | O_NDELAY);
	if (stream == -1) 
	{
		/* Error handling
                 * printf("Error opening stream\n");
                 * exit(1);
                 */
	}
}

ConfigForVentManual::CheckForVents() {
    if(!(Vent == S || Vent == B || Vent == D || Vent == E || Vent == H || Vent == M))
    {
     // error handling throw here   
    }
}

ConfigForVentManual::ConfigForVentManual() {
    // Default Servo-I
    Vent = S;
    //stream = ConfigForVentManual::OpenStream();
    
    // Do stream flag things
}

ConfigForVentManual::ConfigForVentManual(VentName VName) {
    //ConfigForVentManual::CheckForVents(Vent);
    Vent = VName;
    struct termios options;
    stream = -1;
    int RxSuccess = -1;
    //stream = ConfigForVentManual::OpenStream();
    // Do stream flag things
}

ConfigForVentManual::ConfigForVentManual(const ConfigForVentManual& orig) {
}

ConfigForVentManual::~ConfigForVentManual() {
}

ConfigForVentManual::VentOptions() {
    tcgetattr(stream, &options);
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
    options.c_iflag = IGNPAR; // IGNPAR ignores parity errors, not parity itself
    options.c_oflag = 0;
    options.c_lflag = 0;
    tcflush(stream, TCIFLUSH);
    tcsetattr(stream, TCSANOW, &options);
}

ConfigForVentManual::FindVent() {
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