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

void all_light_on(){
	red_light_on();
	orange_light_on();
	green_light_on();
}

void all_light_off(){
	red_light_off();
	orange_light_off();
	green_light_off();
}

void display_binary(int value){
	if(value%2){
		GPIOWrite(GREEN_PIN, HIGH);
	}
	else
	{
		GPIOWrite(GREEN_PIN, LOW);
	}
	if((value/2)%2){
		GPIOWrite(ORANGE_PIN, HIGH);
	}
	else
	{
		GPIOWrite(ORANGE_PIN, LOW);
	}
	if((value/4)%2){
		GPIOWrite(RED_PIN, HIGH);
	}
	else
	{
		GPIOWrite(RED_PIN, LOW);
	}
}

void blink(){

	all_light_on();
	usleep(200000);
	all_light_off();
	usleep(200000);

}
