#include <stdio.h>

int callMyFunc(int variable[]);

int main(void)
{
	int array[2] = {1, 2}; 	

	//CAUTION! array is passed by reference
	int x = callMyFunc(array); 
	
	// The output should be x=2, array[0]=1, array[1]=5
	printf("x=%i, array[0]=%i, array[1]=%i", x, array[0], array[1]);
}

int callMyFunc(int variable[])
{	
	// variable[1] is array[1]
	variable[1] = 5;
	// In return the variable's value is not modified
	return variable[0]++;
}