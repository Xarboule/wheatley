#include "wheatley-library.h"

int main(){

	all_light_off();

	green_light_on();
	sleep(1);

	for(int i=0; i<10; i++){
	green_light_off();
	usleep(500000);
	green_light_on();
	usleep(500000);
	}
	green_light_off();

	return(EXIT_SUCCESS);
}
