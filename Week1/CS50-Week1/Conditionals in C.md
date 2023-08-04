Syntax of a Conditional (i.e. if statement)

if (x < y)  
{  
	//if condition true do something  
}  
else if (x > y)  
{  
	//if the above condition is false do something  
}  
else  
{  
	//if the above conditions are false do something  
}

→ double equal sign `==` means equality in

→ single equal sign `=` means assignment in _C_

The program:

	#include <cs50.h>  
	#include <stdio.h>  
	  
	int main()  
	{  
		int x = get_int("Enter the first value: ");  
		int y = get_int("Enter the second value: ");  
			  
		if (x < y)  
		{  
			printf("x is less than y");  
		}  
		else if (x > y)  
		{  
			printf("x is greater than y");  
		}  
		else  
		{  
			printf("x is equal to y");  
		}  
	}

→ Here in the program above it first imports the required libraries <stdio.h> and <cs50.h>

→ then the int main

→ then we take input values from the user with get_int function provided by <cs50.h> library

→ and then after that we put in the algorithm