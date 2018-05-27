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
