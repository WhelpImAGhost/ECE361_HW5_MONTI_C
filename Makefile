C = gcc-13
CFLAGS = -Wall -Wextra -std=c99

iom361_r2.o: iom361_r2.c iom361_r2.h float_rndm.h
	$(C) $(CFLAGS) -c $^

monthlyDisplay.o: monthlyDisplay.c monthlyDisplay.h iom361_r2.h float_rndm.h
	$(C) $(CFLAGS) -c $^

float_rndm.o: float_rndm.c float_rndm.h
	$(C) $(CFLAGS) -c $^

