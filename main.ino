#include <Servo.h>

// Globals
Servo servo1, servo2;
uint8_t i;

void setup()
{
    // Setup servos
    servo1.attach(3);
    servo2.attach(5);

    // Begin coms
    Serial.begin(9800);
}

void loop()
{
    // Increase servo pos from 0 to 60 deg w/ 25ms delay b/w each iteration
    for (i = 0; i <= 60; i++)
    {
        servo1.write(i);
        servo2.write(i);
        delay(25);
    }

    // Delay 1s
    delay(1000);

    // Deccrease servo pos from 60 to 0 deg w/ 25ms delay b/w each iteration
    for (i = 60; i >= 0; i--)
    {
        servo1.write(i);
        servo2.write(i);
        delay(25);
    }

    // Delay 1s
    delay(1000);
}