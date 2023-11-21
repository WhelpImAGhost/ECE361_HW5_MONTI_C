/* monthlyDisplay.c - A program that takes in data from the iom361_r2 module and displays the 
 * humidity and temperature data over the course of a "month" (not actual data or time)
 *
 * @author:	Caleb Monti (monti@pdx.edu)
 * @date:	21-November-2023
 * @version:	1.0
 *
 ****/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include "monthlyDisplay.h"
#include "iom361_r2.h"

// Defines, Function protoypes, and global variables

int main() {
	
	// Local Variables


	// Working directory
	printf("Hi, I made a thing. Caleb Monti (monti@pdx.edu)\n");
   	errno = 0;
   	char *buf = getcwd(NULL, 0);    // allocates a buffer large enough to hold the path
    	if (buf == NULL) {
       		perror("getcwd");
        	printf("Could not display the path\n");
    	}
    	else {
        	printf("Current working directory: %s\n", buf);
        	free(buf);
    	}
    	printf("\n\n");


	// Main body of code
}
