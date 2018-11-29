/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Test.h
 * Author: Medley
 *
 * Two-part test: 
 * 1) Testing connection using known vent 
 *     Uses VentOptions() with big switch statement included in class definition
 * 2) Testing ability to find connection to unknown vent
 *     Uses FindVent() in class definition
 *     Tries Vent S (Servo-I), then checks for data that makes sense (success test not written yet)
 *     Tries other vents alphabetically (B, D, E, H, M) if not successful
 *
 * Created on July 25, 2018, 1:02 PM
 */

#include <Test.h>

#define ASK 8

int Test() {
using namespace std;
    // Possible to combine two of these?
    // Using enumerated vent letters seem to be easier long-term, but still need to convert from character in testing
    char VentStartLetter;
    int AskCount = 0;
    string input;
    VentName Vent;
    // Asks for vent model until appropriate response received
    while(AskCount < ASK)
    {
        // No reason to ask user for full name of vent, use first letter instead, or use U for unknown
        cout << "What is the first letter of the ventilator name?\n"
                "Type \"U\" to find the ventilator automatically.\n";
        
        getline(cin,input);
        // User can input anything, only uses first letter for input char
        // Maybe also ask user to confirm vent?
        VentStartLetter = input[0];
        // Sets enumerated Vent for each response, 
        // Would need to be edited for additional vents***
        switch (VentStartLetter) {
            case ('S'):
                Vent = S;
                AskCount = (ASK+1);
                break;
            case ('B'):
                Vent = B;
                AskCount = (ASK+1);
                break;
            case ('D'):
                Vent = D;
                AskCount = (ASK+1);
                break;
            case ('E'):
                Vent = E;
                AskCount = (ASK+1);
                break;
            case ('H'):
                Vent = H;
                AskCount = (ASK+1);
                break;
            case ('M'):
                Vent = M;
                AskCount = (ASK+1);
                break;
            case ('U'):
                Vent = U;
                AskCount = (ASK+1);
                break;
            // Suggests valid vent options if invalid input given
            default:
                cout << "Invalid character, please enter: \"S\" for servo-I, \n"
                "\"B\" for Bilaga 24 SCI, \"D\" for Datex-Ohmeda, \n"
                "\"E\" for Evita Infinity V500, \"H\" for Hamilton 1, or \n"
                "\"M\" for Medibus IFU:\n"
                "Type \"U\" to find the ventilator automatically.\n";
                AskCount++;
                break;
        }
    }
    if(AskCount == ASK)
    {
        cout << "Error: Too many bad replies\n";
        // Error handling
                return 1;
    }
    // Object Start of class ConfigForVentModel using newly defined and allocated Vent enumeration
    ConfigForVentModel Start(Vent);
    // Opens stream
    Start.OpenStream();
    // See test setup above: finds vent and applies settings if unknown, applies appropriate settings if known
    // Should probably merge this into one set? Either set vent options in class-defined function or not?
    if (Vent == U)
    {
        Start.FindVent();
    }
    else 
    {
        Start.VentOptions();
    }
    // 0 for success, main will keep at -1 if it does not run
    return 0;
}