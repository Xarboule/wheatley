#include "wheatley-library.h"

int main(){

	all_light_off();

	red_light_on();
	sleep(2);
	red_light_off();
	sleep(1);
	red_light_on();
	sleep(1);
	red_light_off();
	sleep(1);

	return(EXIT_SUCCESS);
}
