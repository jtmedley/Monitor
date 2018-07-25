/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConfigForVentManual.h
 * Author: Medley
 *
 * Created on July 16, 2018, 9:16 PM
 */

#ifndef CONFIGFORVENTMANUAL_H
#define CONFIGFORVENTMANUAL_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <termios.h>
#include <iostream>
#include <string.h>

using namespace std;

class ConfigForVentManual {
public:
    ConfigForVentManual();
    ConfigForVentManual(char Vent);
    ConfigForVentManual(const ConfigForVentManual& orig);
    virtual ~ConfigForVentManual();
    CheckForVents(char Vent);
    OpenStream();
    struct termios VentOptions(struct termios options,char stream,char Vent);
    
private:
    char Vent;
    struct termios options;
    int stream;
    
};

#endif /* CONFIGFORVENTMANUAL_H */

