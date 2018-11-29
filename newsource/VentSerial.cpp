/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VentSerial.cpp
 * Author: pi
 * 
 * Created on 09 August 2018, 18:25
 */

#include "VentSerial.h"

namespace LibSerial 
{

    VentSerial::VentSerial() 
    {
        
    }

    VentSerial::~VentSerial() 
    {
        
    }

    void VentSerial::SetVentName(std::string ventName)
    {
        mVentName = ventName;
    }
    
    std::string VentSerial::GetVentName()
    {
        return mVentName;
    }
    
    void VentSerial::SetSettingsFile()
    {
        mSettingsFile = mVentName + ".txt";
        return;
    }

    std::string VentSerial::GetSettingsFile() 
    {
        return mSettingsFile;
    }

    std::map<std::string,std::string> VentSerial::ParseFile() 
    {
        std::string ventSetting;
        std::string settingValue;
        std::ifstream inFile;
        inFile.open(mSettingsFile);
        std::map<std::string,std::string> ventMap;
        while(inFile >> ventSetting >> settingValue)
        {
            if (ventSetting != "#")
            {
                ventMap[ventSetting] = settingValue;
            }
        }
        inFile.close();
        return ventMap;
    }

} // namespace LibSerial