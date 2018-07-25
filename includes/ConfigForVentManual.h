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
#include <StreamLocation.h>

using namespace std;

enum VentName {S,B,D,E,H,M,U};

class ConfigForVentManual {
public:
    ConfigForVentManual();
    ConfigForVentManual(VentName VName);
    ConfigForVentManual(const ConfigForVentManual& orig);
    virtual ~ConfigForVentManual();
    CheckForVents();
    OpenStream();
    VentOptions();
    FindVent();

    
private:
    VentName Vent;
    struct termios options;
    int stream;
    int RxSuccess;
    
};

#endif /* CONFIGFORVENTMANUAL_H */

