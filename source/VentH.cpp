/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VentH.cpp
 * Author: Medley
 * 
 * Created on July 25, 2018, 1:21 PM
 */

#include <VentFunctions.h>

struct termios VentH(struct termios options,int stream) {
    tcgetattr(stream, &options);
    options.c_cflag = B38400 | CS8 | CLOCAL | CREAD ;
    options.c_iflag = IGNPAR; // IGNPAR ignores parity errors, not parity itself
    options.c_oflag = 0;
    options.c_lflag = 0;
    tcflush(stream, TCIFLUSH);
    tcsetattr(stream, TCSANOW, &options);
    return options;
}