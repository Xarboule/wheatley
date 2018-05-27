#include "sysfs-gpio.h"
#include "wheatley-library.h"

int main(){

	all_light_off();

	while(42){
		orange_light_on();
		sleep(1);
		orange_light_off();
		sleep(1);
	}
	
	return(EXIT_SUCCESS);
}
