/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VentFunctions.h
 * Author: Medley
 * 
 * This is the header file declaring all of the vent settings functions. 
 * 
 * Created on July 25, 2018, 4:16 PM
 */

#ifndef VENTFUNCTIONS_H
#define VENTFUNCTIONS_H

#include <ConfigForVentModel.h>

    // Servo-I
    struct termios VentS(struct termios options,int stream);

    // Bilaga 24 SCI
    struct termios VentB(struct termios options,int stream);

    // Datex-Ohmeda    
    struct termios VentD(struct termios options,int stream);

    // Evita Infinity V500
    struct termios VentE(struct termios options,int stream);
    
    // Hamilton 1
    struct termios VentH(struct termios options,int stream);
    
    // Medibus IFU
    struct termios VentM(struct termios options,int stream);

#endif /* VENTFUNCTIONS_H */