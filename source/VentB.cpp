/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VentB.cpp
 * Author: Medley
 * 
 * This is the vent options file for the Bilaga 24 SCI vent. 
 * 
 * Created on July 25, 2018, 1:15 PM
 */

#include <ConfigForVentModel.h>

struct termios VentB(struct termios options,int stream) {
    // Loads current attributes from open stream
    tcgetattr(stream, &options);
    // Sets ventilator-specific control flags
    options.c_cflag = B38400 | CS8 | CLOCAL | CREAD | PARENB ;
    // Sets universal input, output, and local flags
    options.c_iflag = IGNPAR; // IGNPAR ignores parity errors, not parity itself
    options.c_oflag = 0;
    options.c_lflag = 0;
    // Discards data written but not transmitted or received but not read
    tcflush(stream, TCIFLUSH);
    // Sets terminal parameters from options structure
    tcsetattr(stream, TCSANOW, &options);
    // Does this really need to return something?
    return options;
}