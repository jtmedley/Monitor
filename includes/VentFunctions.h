/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VentFunctions.h
 * Author: Medley
 *
 * Created on July 25, 2018, 4:16 PM
 */

#ifndef VENTFUNCTIONS_H
#define VENTFUNCTIONS_H

#include <ConfigForVentManual.h>

    struct termios VentS(struct termios options,int stream);
    struct termios VentB(struct termios options,int stream);
    struct termios VentD(struct termios options,int stream);
    struct termios VentE(struct termios options,int stream);
    struct termios VentH(struct termios options,int stream);
    struct termios VentM(struct termios options,int stream);

#endif /* VENTFUNCTIONS_H */

