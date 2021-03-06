#ifndef __FONTAIN_H__
#define __FONTAIN_H__

#include <Arduino.h>
#include <entity/Led.h>
#include <entity/Valves.h>

typedef struct fountain_state {
  valve_state valveState;
  led_state led1State;
  led_state led2State;
  led_state led3State;
  led_state led4State;
} fountain_state;

class Fountain
{
    public:
        static void printFountainState(fountain_state fountainState);
        static String toJson(fountain_state fountainState);
        static fountain_state getDemoFountainState();
        static fountain_state fadeLeds(fountain_state fountainState);
        Fountain (
              unsigned char valveCenterPin, unsigned char valveMiddlePin, unsigned char valveExternalPin
            , unsigned char ledPowerPin
            , unsigned char led1RedPin, unsigned char led1GreenPin, unsigned char led1BluePin
            , unsigned char led2RedPin, unsigned char led2GreenPin, unsigned char led2BluePin
            , unsigned char led3RedPin, unsigned char led3GreenPin, unsigned char led3BluePin
            , unsigned char led4RedPin, unsigned char led4GreenPin, unsigned char led4BluePin
        );

        Valves * getValves();
        Led * getLed1();
        Led * getLed2();
        Led * getLed3();
        Led * getLed4();

        void showDemo();
        void updateState(fountain_state fountainState);
        unsigned long getUpdateTime();
        fountain_state getFountainState();

    private:
        unsigned long updateTime = 0;
        unsigned long fadeTime = 0;

        Valves *valves;
        Led *led1;
        Led *led2;
        Led *led3;
        Led *led4;

        void updateValves(valve_state fountainState);
        void updateLeds(Led *led, led_state fountainState);
};

#endif