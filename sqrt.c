/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// start main 
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);

	if(input < 0)
	{

		printf("DEBUG:Sqrt of %d is %fi\n",input,sqrt(-1*input));
		return(0);
	}
	
	printf("DEBUG:Sqrt of %d is %f\n",input,sqrt(input));
	return(0);
	printf("DEBUG:End of program. Exiting.\n");


} // end main
