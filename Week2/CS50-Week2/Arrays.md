An array is a way of storing data back to back in the computer's memory in such a way that you can access each individual member easily.

## Creating an Array

	#include <stdio.h>
	
	int main(void)
	{
		int arr[3];
	}

In order to create an array, we first give the *type* of array that we want (above we use int), then the name of the array, and then how long we want that array to be (which is given between square brackets).

## How to Pass in an Array as a Parameter in a Function
In order to pass an array as a parameter in a function, we do the following;

	int function_name(parameter_type parameter_name[]);