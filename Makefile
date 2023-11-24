C = gcc-13
CFLAGS = -Wall -Wextra -std=c99

clean:
	rm -f *.o floatTest iomTest

floatTest: float_rndm.o test_float_rndm.c
	$(C) $(CFLAGS) -o $@ $^

iomTest: iom361_r2.o float_rndm.o test_iom361_r2.c
	$(C) $(CFLAGS) -o $@ $^

iom361_r2.o: iom361_r2.c iom361_r2.h float_rndm.h
	$(C) $(CFLAGS) -c $^

monthlyDisplay.o: monthlyDisplay.c monthlyDisplay.h iom361_r2.h float_rndm.h
	$(C) $(CFLAGS) -c $^

BST_ADT.o: BST_ADT.c BST_ADT.h
	$(C) $(CFLAGS) -c $^

float_rndm.o: float_rndm.c float_rndm.h
	$(C) $(CFLAGS) -c $^

