/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConfigForVentModel.h
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

// Sets enumerated values for acceptable vent names - easier than using strings or chars
// Would need to be changed for additional vents***
enum VentName {S,B,D,E,H,M,U};

class ConfigForVentModel {
public:
    ConfigForVentModel();
    ConfigForVentModel(VentName VName);
    ConfigForVentModel(const ConfigForVentModel& orig);
    virtual ~ConfigForVentModel();
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

