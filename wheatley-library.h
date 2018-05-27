#include "sysfs-gpio.h"


#define RED_PIN 44 
#define ORANGE_PIN 68
#define GREEN_PIN 67

void initialize();

void red_light_on();

void red_light_off();

void orange_light_on();

void orange_light_off();

void green_light_on();

void green_light_off();

void display_binary(int value);

void blink();
