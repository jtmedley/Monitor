/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newsimpletest.cpp
 * Author: pi
 *
 * Created on August 12, 2018, 2:49 AM
 */

#include <stdlib.h>
#include <iostream>

/*
 * Simple C++ Test Suite
 */

LibSerial::VentSerial::VentSerial();

void testVentSerial() {
    LibSerial::VentSerial ventSerial();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testVentSerial (newsimpletest) message=error message sample" << std::endl;
    }
}

void LibSerial::VentSerial::SetVentName(std::string);

void testSetVentName() {
    std::string p0;
    LibSerial::VentSerial ventSerial;
    ventSerial.SetVentName(p0);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSetVentName (newsimpletest) message=error message sample" << std::endl;
    }
}

std::string LibSerial::VentSerial::GetVentName();

void testGetVentName() {
    LibSerial::VentSerial ventSerial;
    std::string result = ventSerial.GetVentName();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetVentName (newsimpletest) message=error message sample" << std::endl;
    }
}

void LibSerial::VentSerial::SetSettingsFile();

void testSetSettingsFile() {
    LibSerial::VentSerial ventSerial;
    ventSerial.SetSettingsFile();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSetSettingsFile (newsimpletest) message=error message sample" << std::endl;
    }
}

std::string LibSerial::VentSerial::GetSettingsFile();

void testGetSettingsFile() {
    LibSerial::VentSerial ventSerial;
    std::string result = ventSerial.GetSettingsFile();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetSettingsFile (newsimpletest) message=error message sample" << std::endl;
    }
}

std::map<std::string, std::string> LibSerial::VentSerial::ParseFile();

void testParseFile() {
    LibSerial::VentSerial ventSerial;
    std::map<std::string, std::string> result = ventSerial.ParseFile();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testParseFile (newsimpletest) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testVentSerial (newsimpletest)" << std::endl;
    testVentSerial();
    std::cout << "%TEST_FINISHED% time=0 testVentSerial (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testSetVentName (newsimpletest)" << std::endl;
    testSetVentName();
    std::cout << "%TEST_FINISHED% time=0 testSetVentName (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testGetVentName (newsimpletest)" << std::endl;
    testGetVentName();
    std::cout << "%TEST_FINISHED% time=0 testGetVentName (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testSetSettingsFile (newsimpletest)" << std::endl;
    testSetSettingsFile();
    std::cout << "%TEST_FINISHED% time=0 testSetSettingsFile (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testGetSettingsFile (newsimpletest)" << std::endl;
    testGetSettingsFile();
    std::cout << "%TEST_FINISHED% time=0 testGetSettingsFile (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testParseFile (newsimpletest)" << std::endl;
    testParseFile();
    std::cout << "%TEST_FINISHED% time=0 testParseFile (newsimpletest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

