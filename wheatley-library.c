#include "wheatley-library.h"


void initialize(){
	GPIOExport(RED_PIN);
	GPIOExport(ORANGE_PIN);
	GPIOExport(GREEN_PIN);	

	GPIODirection(RED_PIN, OUT);
	GPIODirection(ORANGE_PIN, OUT);
	GPIODirection(GREEN_PIN, OUT);
}


// For each light

void red_light_on(){
	GPIOWrite(RED_PIN, HIGH);	
}

void red_light_off(){
	GPIOWrite(RED_PIN, LOW);
}

void orange_light_on(){
	GPIOWrite(ORANGE_PIN, HIGH);
}

void orange_light_off(){
	GPIOWrite(ORANGE_PIN, LOW);
}

void green_light_on(){
	GPIOWrite(GREEN_PIN, HIGH);
}

void green_light_off(){
	GPIOWrite(GREEN_PIN, LOW);
}


