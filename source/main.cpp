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
  
#include <ConfigForVentManual.h>
#include <Test.h>

/*
 * 
 */
int main() {
    
    // Testing Protocol
    int TestSuccess = -1;
    TestSuccess = Test();
    printf("%i",TestSuccess);
    
    return 0;
}