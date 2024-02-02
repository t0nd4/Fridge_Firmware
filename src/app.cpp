#include <app.h>
#include <pins.h>

void App::setup()
{
    pinMode(Pins::BUZZER, OUTPUT); 
    pinMode(Pins::MAGNET, INPUT);

}