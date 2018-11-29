/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newsimpletest3.cpp
 * Author: pi
 *
 * Created on August 12, 2018, 2:53 AM
 */

#include <stdlib.h>
#include <iostream>

/*
 * Simple C++ Test Suite
 */

LibSerial::SerialPort::SerialPort();

void testSerialPort() {
    LibSerial::SerialPort serialPort();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSerialPort (newsimpletest3) message=error message sample" << std::endl;
    }
}

LibSerial::SerialPort::SerialPort(const std::string& fileName, const BaudRate& baudRate, const CharacterSize& characterSize, const FlowControl& flowControlType, const Parity& parityType, const StopBits& stopBits);

void testSerialPort2() {
    const std::string& fileName;
    const BaudRate& baudRate;
    const CharacterSize& characterSize;
    const FlowControl& flowControlType;
    const Parity& parityType;
    const StopBits& stopBits;
    LibSerial::SerialPort serialPort(fileName, baudRate, characterSize, flowControlType, parityType, stopBits);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSerialPort2 (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::Open(const std::string& fileName, const std::ios_base::openmode& openMode);

void testOpen() {
    const std::string& fileName;
    const std::ios_base::openmode& openMode;
    LibSerial::SerialPort serialPort;
    serialPort.Open(fileName, openMode);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testOpen (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::Close();

void testClose() {
    LibSerial::SerialPort serialPort;
    serialPort.Close();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testClose (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::DrainWriteBuffer();

void testDrainWriteBuffer() {
    LibSerial::SerialPort serialPort;
    serialPort.DrainWriteBuffer();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testDrainWriteBuffer (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::FlushInputBuffer();

void testFlushInputBuffer() {
    LibSerial::SerialPort serialPort;
    serialPort.FlushInputBuffer();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testFlushInputBuffer (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::FlushOutputBuffer();

void testFlushOutputBuffer() {
    LibSerial::SerialPort serialPort;
    serialPort.FlushOutputBuffer();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testFlushOutputBuffer (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::FlushIOBuffers();

void testFlushIOBuffers() {
    LibSerial::SerialPort serialPort;
    serialPort.FlushIOBuffers();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testFlushIOBuffers (newsimpletest3) message=error message sample" << std::endl;
    }
}

bool LibSerial::SerialPort::IsDataAvailable();

void testIsDataAvailable() {
    LibSerial::SerialPort serialPort;
    bool result = serialPort.IsDataAvailable();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testIsDataAvailable (newsimpletest3) message=error message sample" << std::endl;
    }
}

bool LibSerial::SerialPort::IsOpen();

void testIsOpen() {
    LibSerial::SerialPort serialPort;
    bool result = serialPort.IsOpen();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testIsOpen (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::SetDefaultSerialPortParameters();

void testSetDefaultSerialPortParameters() {
    LibSerial::SerialPort serialPort;
    serialPort.SetDefaultSerialPortParameters();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSetDefaultSerialPortParameters (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::SetBaudRate(const BaudRate& baudRate);

void testSetBaudRate() {
    const BaudRate& baudRate;
    LibSerial::SerialPort serialPort;
    serialPort.SetBaudRate(baudRate);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSetBaudRate (newsimpletest3) message=error message sample" << std::endl;
    }
}

BaudRate LibSerial::SerialPort::GetBaudRate();

void testGetBaudRate() {
    LibSerial::SerialPort serialPort;
    BaudRate result = serialPort.GetBaudRate();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetBaudRate (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::SetCharacterSize(const CharacterSize& characterSize);

void testSetCharacterSize() {
    const CharacterSize& characterSize;
    LibSerial::SerialPort serialPort;
    serialPort.SetCharacterSize(characterSize);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSetCharacterSize (newsimpletest3) message=error message sample" << std::endl;
    }
}

CharacterSize LibSerial::SerialPort::GetCharacterSize();

void testGetCharacterSize() {
    LibSerial::SerialPort serialPort;
    CharacterSize result = serialPort.GetCharacterSize();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetCharacterSize (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::SetFlowControl(const FlowControl& flowControlType);

void testSetFlowControl() {
    const FlowControl& flowControlType;
    LibSerial::SerialPort serialPort;
    serialPort.SetFlowControl(flowControlType);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSetFlowControl (newsimpletest3) message=error message sample" << std::endl;
    }
}

FlowControl LibSerial::SerialPort::GetFlowControl();

void testGetFlowControl() {
    LibSerial::SerialPort serialPort;
    FlowControl result = serialPort.GetFlowControl();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetFlowControl (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::SetParity(const Parity& parityType);

void testSetParity() {
    const Parity& parityType;
    LibSerial::SerialPort serialPort;
    serialPort.SetParity(parityType);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSetParity (newsimpletest3) message=error message sample" << std::endl;
    }
}

Parity LibSerial::SerialPort::GetParity();

void testGetParity() {
    LibSerial::SerialPort serialPort;
    Parity result = serialPort.GetParity();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetParity (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::SetStopBits(const StopBits& stopBits);

void testSetStopBits() {
    const StopBits& stopBits;
    LibSerial::SerialPort serialPort;
    serialPort.SetStopBits(stopBits);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSetStopBits (newsimpletest3) message=error message sample" << std::endl;
    }
}

StopBits LibSerial::SerialPort::GetStopBits();

void testGetStopBits() {
    LibSerial::SerialPort serialPort;
    StopBits result = serialPort.GetStopBits();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetStopBits (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::SetVMin(const short vmin);

void testSetVMin() {
    const short vmin;
    LibSerial::SerialPort serialPort;
    serialPort.SetVMin(vmin);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSetVMin (newsimpletest3) message=error message sample" << std::endl;
    }
}

short LibSerial::SerialPort::GetVMin();

void testGetVMin() {
    LibSerial::SerialPort serialPort;
    short result = serialPort.GetVMin();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetVMin (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::SetVTime(const short vtime);

void testSetVTime() {
    const short vtime;
    LibSerial::SerialPort serialPort;
    serialPort.SetVTime(vtime);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSetVTime (newsimpletest3) message=error message sample" << std::endl;
    }
}

short LibSerial::SerialPort::GetVTime();

void testGetVTime() {
    LibSerial::SerialPort serialPort;
    short result = serialPort.GetVTime();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetVTime (newsimpletest3) message=error message sample" << std::endl;
    }
}

int LibSerial::SerialPort::GetFileDescriptor();

void testGetFileDescriptor() {
    LibSerial::SerialPort serialPort;
    int result = serialPort.GetFileDescriptor();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetFileDescriptor (newsimpletest3) message=error message sample" << std::endl;
    }
}

int LibSerial::SerialPort::GetNumberOfBytesAvailable();

void testGetNumberOfBytesAvailable() {
    LibSerial::SerialPort serialPort;
    int result = serialPort.GetNumberOfBytesAvailable();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetNumberOfBytesAvailable (newsimpletest3) message=error message sample" << std::endl;
    }
}

std::vector<std::string> LibSerial::SerialPort::GetAvailableSerialPorts();

void testGetAvailableSerialPorts() {
    LibSerial::SerialPort serialPort;
    std::vector<std::string> result = serialPort.GetAvailableSerialPorts();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetAvailableSerialPorts (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::Read(DataBuffer& dataBuffer, const size_t numberOfBytes, const size_t msTimeout);

void testRead() {
    DataBuffer& dataBuffer;
    const size_t numberOfBytes;
    const size_t msTimeout;
    LibSerial::SerialPort serialPort;
    serialPort.Read(dataBuffer, numberOfBytes, msTimeout);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testRead (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::Read(std::string& dataString, const size_t numberOfBytes, const size_t msTimeout);

void testRead2() {
    std::string& dataString;
    const size_t numberOfBytes;
    const size_t msTimeout;
    LibSerial::SerialPort serialPort;
    serialPort.Read(dataString, numberOfBytes, msTimeout);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testRead2 (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::ReadByte(char& charBuffer, const size_t msTimeout);

void testReadByte() {
    char& charBuffer;
    const size_t msTimeout;
    LibSerial::SerialPort serialPort;
    serialPort.ReadByte(charBuffer, msTimeout);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testReadByte (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::ReadByte(unsigned char& charBuffer, const size_t msTimeout);

void testReadByte2() {
    unsigned char& charBuffer;
    const size_t msTimeout;
    LibSerial::SerialPort serialPort;
    serialPort.ReadByte(charBuffer, msTimeout);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testReadByte2 (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::ReadLine(std::string& dataString, const char lineTerminator, const size_t msTimeout);

void testReadLine() {
    std::string& dataString;
    const char lineTerminator;
    const size_t msTimeout;
    LibSerial::SerialPort serialPort;
    serialPort.ReadLine(dataString, lineTerminator, msTimeout);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testReadLine (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::Write(const DataBuffer& dataBuffer);

void testWrite() {
    const DataBuffer& dataBuffer;
    LibSerial::SerialPort serialPort;
    serialPort.Write(dataBuffer);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testWrite (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::Write(const std::string& dataString);

void testWrite2() {
    const std::string& dataString;
    LibSerial::SerialPort serialPort;
    serialPort.Write(dataString);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testWrite2 (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::WriteByte(const char charbuffer);

void testWriteByte() {
    const char charbuffer;
    LibSerial::SerialPort serialPort;
    serialPort.WriteByte(charbuffer);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testWriteByte (newsimpletest3) message=error message sample" << std::endl;
    }
}

void LibSerial::SerialPort::WriteByte(const unsigned char charbuffer);

void testWriteByte2() {
    const unsigned char charbuffer;
    LibSerial::SerialPort serialPort;
    serialPort.WriteByte(charbuffer);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testWriteByte2 (newsimpletest3) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest3" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testSerialPort (newsimpletest3)" << std::endl;
    testSerialPort();
    std::cout << "%TEST_FINISHED% time=0 testSerialPort (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testSerialPort2 (newsimpletest3)" << std::endl;
    testSerialPort2();
    std::cout << "%TEST_FINISHED% time=0 testSerialPort2 (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testOpen (newsimpletest3)" << std::endl;
    testOpen();
    std::cout << "%TEST_FINISHED% time=0 testOpen (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testClose (newsimpletest3)" << std::endl;
    testClose();
    std::cout << "%TEST_FINISHED% time=0 testClose (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testDrainWriteBuffer (newsimpletest3)" << std::endl;
    testDrainWriteBuffer();
    std::cout << "%TEST_FINISHED% time=0 testDrainWriteBuffer (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testFlushInputBuffer (newsimpletest3)" << std::endl;
    testFlushInputBuffer();
    std::cout << "%TEST_FINISHED% time=0 testFlushInputBuffer (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testFlushOutputBuffer (newsimpletest3)" << std::endl;
    testFlushOutputBuffer();
    std::cout << "%TEST_FINISHED% time=0 testFlushOutputBuffer (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testFlushIOBuffers (newsimpletest3)" << std::endl;
    testFlushIOBuffers();
    std::cout << "%TEST_FINISHED% time=0 testFlushIOBuffers (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testIsDataAvailable (newsimpletest3)" << std::endl;
    testIsDataAvailable();
    std::cout << "%TEST_FINISHED% time=0 testIsDataAvailable (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testIsOpen (newsimpletest3)" << std::endl;
    testIsOpen();
    std::cout << "%TEST_FINISHED% time=0 testIsOpen (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testSetDefaultSerialPortParameters (newsimpletest3)" << std::endl;
    testSetDefaultSerialPortParameters();
    std::cout << "%TEST_FINISHED% time=0 testSetDefaultSerialPortParameters (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testSetBaudRate (newsimpletest3)" << std::endl;
    testSetBaudRate();
    std::cout << "%TEST_FINISHED% time=0 testSetBaudRate (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testGetBaudRate (newsimpletest3)" << std::endl;
    testGetBaudRate();
    std::cout << "%TEST_FINISHED% time=0 testGetBaudRate (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testSetCharacterSize (newsimpletest3)" << std::endl;
    testSetCharacterSize();
    std::cout << "%TEST_FINISHED% time=0 testSetCharacterSize (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testGetCharacterSize (newsimpletest3)" << std::endl;
    testGetCharacterSize();
    std::cout << "%TEST_FINISHED% time=0 testGetCharacterSize (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testSetFlowControl (newsimpletest3)" << std::endl;
    testSetFlowControl();
    std::cout << "%TEST_FINISHED% time=0 testSetFlowControl (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testGetFlowControl (newsimpletest3)" << std::endl;
    testGetFlowControl();
    std::cout << "%TEST_FINISHED% time=0 testGetFlowControl (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testSetParity (newsimpletest3)" << std::endl;
    testSetParity();
    std::cout << "%TEST_FINISHED% time=0 testSetParity (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testGetParity (newsimpletest3)" << std::endl;
    testGetParity();
    std::cout << "%TEST_FINISHED% time=0 testGetParity (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testSetStopBits (newsimpletest3)" << std::endl;
    testSetStopBits();
    std::cout << "%TEST_FINISHED% time=0 testSetStopBits (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testGetStopBits (newsimpletest3)" << std::endl;
    testGetStopBits();
    std::cout << "%TEST_FINISHED% time=0 testGetStopBits (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testSetVMin (newsimpletest3)" << std::endl;
    testSetVMin();
    std::cout << "%TEST_FINISHED% time=0 testSetVMin (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testGetVMin (newsimpletest3)" << std::endl;
    testGetVMin();
    std::cout << "%TEST_FINISHED% time=0 testGetVMin (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testSetVTime (newsimpletest3)" << std::endl;
    testSetVTime();
    std::cout << "%TEST_FINISHED% time=0 testSetVTime (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testGetVTime (newsimpletest3)" << std::endl;
    testGetVTime();
    std::cout << "%TEST_FINISHED% time=0 testGetVTime (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testGetFileDescriptor (newsimpletest3)" << std::endl;
    testGetFileDescriptor();
    std::cout << "%TEST_FINISHED% time=0 testGetFileDescriptor (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testGetNumberOfBytesAvailable (newsimpletest3)" << std::endl;
    testGetNumberOfBytesAvailable();
    std::cout << "%TEST_FINISHED% time=0 testGetNumberOfBytesAvailable (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testGetAvailableSerialPorts (newsimpletest3)" << std::endl;
    testGetAvailableSerialPorts();
    std::cout << "%TEST_FINISHED% time=0 testGetAvailableSerialPorts (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testRead (newsimpletest3)" << std::endl;
    testRead();
    std::cout << "%TEST_FINISHED% time=0 testRead (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testRead2 (newsimpletest3)" << std::endl;
    testRead2();
    std::cout << "%TEST_FINISHED% time=0 testRead2 (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testReadByte (newsimpletest3)" << std::endl;
    testReadByte();
    std::cout << "%TEST_FINISHED% time=0 testReadByte (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testReadByte2 (newsimpletest3)" << std::endl;
    testReadByte2();
    std::cout << "%TEST_FINISHED% time=0 testReadByte2 (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testReadLine (newsimpletest3)" << std::endl;
    testReadLine();
    std::cout << "%TEST_FINISHED% time=0 testReadLine (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testWrite (newsimpletest3)" << std::endl;
    testWrite();
    std::cout << "%TEST_FINISHED% time=0 testWrite (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testWrite2 (newsimpletest3)" << std::endl;
    testWrite2();
    std::cout << "%TEST_FINISHED% time=0 testWrite2 (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testWriteByte (newsimpletest3)" << std::endl;
    testWriteByte();
    std::cout << "%TEST_FINISHED% time=0 testWriteByte (newsimpletest3)" << std::endl;

    std::cout << "%TEST_STARTED% testWriteByte2 (newsimpletest3)" << std::endl;
    testWriteByte2();
    std::cout << "%TEST_FINISHED% time=0 testWriteByte2 (newsimpletest3)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

