#include "wheatley-library.h"

int main(){

	all_light_off();

	green_light_on();
	sleep(2);
	green_light_off();
	sleep(1);
	green_light_on();
	sleep(1);
	green_light_off();
	sleep(1);

	return(EXIT_SUCCESS);
}
