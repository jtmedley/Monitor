/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <termios.h>
#include <iostream>
#include <string>
#include <vector>
#include "ConfigForVentManual.h"

int Test() {
using namespace std;
    char VentStartLetter;
    string input;
    while(1)
    {
        
        cout << "What is the first letter of the vent name?\n";
        
        getline(cin,input);
        if(input == "S" || input == "B" || input == "D" || input == "E" || input == "H" || input == "M")
        {
            VentStartLetter = input[0];
            ConfigForVentManual(VentStartLetter);
            break;
        }
        cout << "Invalid character, please enter: \"S\" for servo-I, \n"
                "\"B\" for Bilaga 24 SCI, \"D\" for Datex-Ohmeda, \n"
                "\"E\" for Evita Infinity V500, \"H\" for Hamilton 1, or \n"
                "\"M\" for Medibus IFU:\n";
    }
    return 0;
}
