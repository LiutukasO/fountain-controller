
#include <entity/Fountain.h>

//#define IN_DEBUG_MODE

//98:41:5c:03:f2:af
//ac:67:b2:2b:0e:70
unsigned char receiverAddress[] = {0x10, 0x52, 0x1C, 0x68, 0x03, 0x90};
unsigned char senderAddress[] = {0xAC, 0x67, 0xB2, 0x2B, 0x0E, 0x70};

unsigned char valveCenterPin   = 13;
unsigned char valveMiddlePin   = 14;
unsigned char valveExternalPin = 15;

unsigned char ledPowerPin  = 2;

unsigned char led1RedPin   = 19;
unsigned char led1GreenPin = 21;
unsigned char led1BluePin  = 22;

unsigned char led2RedPin   = 4;
unsigned char led2GreenPin = 5;
unsigned char led2BluePin  = 8;

unsigned char led3RedPin   = 23;
unsigned char led3GreenPin = 32;
unsigned char led3BluePin  = 33;

unsigned char led4RedPin   = 27;
unsigned char led4GreenPin = 26;
unsigned char led4BluePin  = 25;

unsigned char valvePins[] = {valveCenterPin, valveMiddlePin, valveExternalPin};
unsigned char led1Pins[]  = {led1RedPin, led1GreenPin, led1BluePin};
unsigned char led2Pins[]  = {led2RedPin, led2GreenPin, led2BluePin};
unsigned char led3Pins[]  = {led3RedPin, led3GreenPin, led3BluePin};
unsigned char led4Pins[]  = {led4RedPin, led4GreenPin, led4BluePin};

unsigned long iddleTimeToDemo = 10000; // 10s

unsigned char audioInputPin = 14;
