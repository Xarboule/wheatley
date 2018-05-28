#include "sysfs-gpio.h"
#include "wheatley-library.h"

int main(){

	all_light_off();

	while(42){
		orange_light_on();
		usleep(500000);
		orange_light_off();
		usleep(500000);
	}
	
	return(EXIT_SUCCESS);
}
