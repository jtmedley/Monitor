/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <Test.h>

int Test() {
using namespace std;
    char VentStartLetter;
    string input;
    VentName Vent;
    while(1)
    {
        
        cout << "What is the first letter of the ventilator name?\n"
                "Type \"U\" to find the ventilator automatically.\n";
        
        getline(cin,input);
        if (input == "S" || input == "B" || input == "D" || input == "E" || input == "H" || input == "M" || input == "U")
        {
            VentStartLetter = input[0];
            switch (VentStartLetter) {
                case ('S'):
                    Vent = S;
                    break;
                case ('B'):
                    Vent = B;
                    break;
                case ('D'):
                    Vent = D;
                    break;
                case ('E'):
                    Vent = E;
                    break;
                case ('H'):
                    Vent = H;
                    break;
                case ('M'):
                    Vent = M;
                    break;
                case ('U'):
                    Vent = U;
                    break;
            }       
            ConfigForVentManual Start(Vent);
            Start.OpenStream();
            if (Vent == U)
            {
                Start.FindVent();
            }
            else 
            {
                Start.VentOptions();
            }
            break;
        }
        cout << "Invalid character, please enter: \"S\" for servo-I, \n"
                "\"B\" for Bilaga 24 SCI, \"D\" for Datex-Ohmeda, \n"
                "\"E\" for Evita Infinity V500, \"H\" for Hamilton 1, or \n"
                "\"M\" for Medibus IFU:\n"
                "Type \"U\" to find the ventilator automatically.\n";
    }
    return 0;
}
