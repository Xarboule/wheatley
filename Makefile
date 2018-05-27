

all: init processing success failure idle

init: wheatley-library.o sysfs-gpio.o wheatley-init.o
	gcc -Wall -o wheatley-init wheatley-library.o sysfs-gpio.o wheatley-init.o

wheatley-init.o: wheatley-init.c
	gcc -Wall -o wheatley-init.o -c wheatley-init.c


processing: wheatley-library.o sysfs-gpio.o wheatley-processing.o
	gcc -Wall -o wheatley-processing wheatley-library.o sysfs-gpio.o wheatley-processing.o

wheatley-processing.o: wheatley-processing.c
	gcc -Wall -o wheatley-processing.o -c wheatley-processing.c


success: wheatley-library.o sysfs-gpio.o wheatley-success.o
	gcc -Wall -o wheatley-success wheatley-library.o sysfs-gpio.o wheatley-success.o 

wheatley-success.o: wheatley-success.c 
	gcc -Wall -o wheatley-success.o -c wheatley-success.c

failure: wheatley-library.o sysfs-gpio.o wheatley-failure.o
	gcc -Wall -o wheatley-failure wheatley-library.o sysfs-gpio.o wheatley-failure.o

wheatley-failure.o: wheatley-failure.c
	gcc -Wall -o wheatley-failure.o -c wheatley-failure.c

idle: wheatley-library.o sysfs-gpio.o wheatley-idle.o
	gcc -Wall -o wheatley-idle wheatley-library.o sysfs-gpio.o wheatley-idle.o 

wheatley-idle.o: wheatley-idle.c 
	gcc -Wall -o wheatley-idle.o -c wheatley-idle.c

wheatley-library.o: wheatley-library.h wheatley-library.c
	gcc -o wheatley-library.o -c wheatley-library.c

sysfs-gpio.o: sysfs-gpio.c sysfs-gpio.h
	gcc -o sysfs-gpio.o -c sysfs-gpio.c

clean:
	$(RM) *.o
	$(RM) wheatley-idle
