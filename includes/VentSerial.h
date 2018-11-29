/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VentSerial.h
 * Author: pi
 *
 * Created on 09 August 2018, 18:24
 */

#ifndef VENTSERIAL_H
#define VENTSERIAL_H

#include <map>
#include <fstream>

#include "SerialPort.h"

/**
 * @namespace Libserial
 */
namespace LibSerial 
{

    class VentSerial
    {
    public:
        /**
         * @brief  Default constructor
         */
        VentSerial();
        
        /**
         * @brief  Destructor
         */
        virtual ~VentSerial() noexcept;
        
        /**
         * @brief  Sets vent name
         */
        void SetVentName(std::string);
        
        /**
         * @brief  Retrieves current vent name
         */
        std::string GetVentName();
        
        /**
         * @brief  Sets port settings to settings from designated file
         */
        void SetSettingsFile();
        
        /**
         * @brief  Retrieves current settings file
         */
        std::string GetSettingsFile();
        
        /**
         * @brief  Parses settings file and stores settings in map
         */
        std::map<std::string,std::string> ParseFile(); 
        
        /**
         * @brief Applies parsed settings from map
         */
        void DistributeSettings(const std::map<std::string,std::string>);
        
        /**
         * @brief  Sets baud rate from mapped settings
         */
        void VentBaudRate();
        
        /**
         * @brief  Sets character size from mapped settings
         */
        void VentCharacterSize();
        
        /**
         * @brief  Sets flow control from mapped settings
         */
        void VentFlowControl();
        
        /**
         * @brief  Sets parity from mapped settings
         */
        void VentParity();
        
        /**
         * @brief  Instance of SerialPort object declared publicly
         */
        SerialPort mVentPort;

        
    protected:

    private:

        /**
         * @brief Prevents copying of objects of this class by declaring the copy
         *        constructor private. This method is never defined.
         */
        VentSerial(const VentSerial& otherVentSerial) = delete;

        /**
         * @brief Move construction is disallowed.
         */
        VentSerial(const VentSerial&& otherVentSerial) = delete;

        /**
         * @brief Prevents copying of objects of this class by declaring the
         *        assignment operator private. This method is never defined.
         */
        VentSerial& operator=(const VentSerial& otherVentSerial) = delete;

        /**
         * @brief Move assignment is not allowed.
         */
        VentSerial& operator=(const VentSerial&& otherVentSerial) = delete;
        
        /**
         * @brief Baud rate setting to be applied from vent settings file and used in 
         *        functions from SerialPort class
         */
        BaudRate mVentBaudRate {BaudRate::BAUD_DEFAULT};
        
        /**
         * @brief Character size setting to be applied from vent settings file and used in 
         *        functions from SerialPort class
         */
        CharacterSize mVentCharacterSize {CharacterSize::CHAR_SIZE_DEFAULT};
        
        /**
         * @brief Flow control setting to be applied from vent settings file and used in 
         *        functions from SerialPort class
         */
        FlowControl mVentFlowControl {FlowControl::FLOW_CONTROL_DEFAULT};
        
        /**
         * @brief Parity setting to be applied from vent settings file and used in 
         *        functions from SerialPort class
         */
        Parity mVentParity {Parity::PARITY_DEFAULT};
        
        /**
         * @brief Stop bits setting to be applied from vent settings file and used in 
         *        functions from SerialPort class
         */
        StopBits mVentStopBits {StopBits::STOP_BITS_DEFAULT};
        
        /**
         * @brief Vent name, typically Servo-i
         */
        std::string mVentName;
        
        /**
         * @brief Settings file in mVentName.txt format, i.e. Servo-i.txt
         */
        std::string mSettingsFile;
        
    };

} // namespace LibSerial
    
#endif /* VENTSERIAL_H */
