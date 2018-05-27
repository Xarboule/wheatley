#include "sysfs-gpio.h"
#include "wheatley-library.h"

int main(){
	initialize();
	green_light_off();
	red_light_off();

	red_light_on();
	usleep(200000);
	orange_light_on();
	usleep(200000);
	green_light_on();
	sleep(1);
	
	green_light_off();
	orange_light_off();
	red_light_off();

	return(EXIT_SUCCESS);
}
