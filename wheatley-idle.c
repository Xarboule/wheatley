#include "sysfs-gpio.h"
#include "wheatley-library.h"

void binary_counter(){
	for(int i=0; i<32; i++){
		display_binary(i);
		sleep(1);
	}
}



void nimportenawak(){
	for(int i=32; i>0; i--){
		display_binary(i);
		usleep(100000);
	}

}

int main(){
	green_light_off();
	orange_light_off();
	red_light_off();

	while(42){
		binary_counter();
		nimportenawak();
		blink();
		blink();
	}
	
	return(EXIT_SUCCESS);
}
