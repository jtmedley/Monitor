/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jonathan Medley
 *
 * Main function for ventilator monitor project: Monitor.exe.
 * Last build time: 9 seconds.
 * For use with Raspberry Pi running Linux.
 * See README file for more information.
 * 
 * Created on July 3, 2018, 3:46 PM
 */

//#include <PortableIncludes.h>
  
#include <ConfigForVentModel.h>
#include <Test.h>

int main() {
    
    // Testing Protocol
    int TestSuccess = -1;
    TestSuccess = Test();
    // -1 if failed, 0 if success
    cout << TestSuccess;
    
    return 0;
}