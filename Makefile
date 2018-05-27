all: init processing idle

init: wheatley-library.o sysfs-gpio.o wheatley-init.o
	gcc -Wall -o wheatley-init wheatley-library.o sysfs-gpio.o wheatley-init.o

wheatley-init.o: wheatley-init.c
	gcc -Wall -o wheatley-init.o -c wheatley-init.c


processing: wheatley-library.o sysfs-gpio.o wheatley-processing.o
	gcc -Wall -o wheatley-processing wheatley-library.o sysfs-gpio.o wheatley-processing.o

wheatley-processing.o: wheatley-processing.c
	gcc -Wall -o wheatley-processing.o -c wheatley-processing.c



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
