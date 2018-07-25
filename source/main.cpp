/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jonathan Medley
 *
 * Created on July 3, 2018, 3:46 PM
 */

//#include <PortableIncludes.h>
  
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <termios.h>
#include <iostream>
#include <string>
#include <vector>
#include "ConfigForVentManual.h"

/*
 * 
 */
int main() {
using namespace std;
    char VentStartLetter;
    string input;
    while(1)
    {
        
        cout << "What is the first letter of the vent name?";
        
        getline(cin,input);
        if(input == "S" || input == "B" || input == "D" || input == "E" || input == "H" || input == "M")
        {
            VentStartLetter = input[0];
            ConfigForVentManual(VentStartLetter);
            break;
        }
        cout << "Invalid character, please enter \"S\" for servo-I, "
                "\"B\" for Bilaga 24 SCI, \"D\" for Datex-Ohmeda, "
                "\"E\" for Evita Infinity V500, \"H\" for Hamilton 1, or "
                "\"M\" for Medibus IFU:";
    }
    
    
    return 0;
}