/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VentS.h
 * Author: Medley
 *
 * Created on July 25, 2018, 1:08 PM
 */

#ifndef VENTS_H
#define VENTS_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <termios.h>
#include <iostream>
#include <string.h>

struct termios VentS(struct termios options,char stream,char Vent);

#endif /* VENTS_H */
