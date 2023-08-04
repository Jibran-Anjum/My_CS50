The first thing to do while creating functions in _C_ is declaration of the function;

	// At the top of the file after the include files we simply declare the functions  
	  
	#include <stdio.h>  
	  
	// In order to declare a function, at the begining we have the type, then the name, and then between perenthesis any value  
	// that we want to pass in to the function is added  
	int size_grid(void);  
	int print_grid(int size);
	
	then the second thing to do is the calling of the function;
	
	// we simply callout the name of the function within the main function...  
	  
	int main()  
	{  
		// we can store the function within a variable  
		int n = size_grid();  
		// we can also simply type the function without storing it in any other variable and pass in a value  
		print_grid(n);
	}

and then the definition of the function;

	// In order to define a function, in the begining we add the type, then the name and then any value that we want to pass  
	// within the function and then we type the body of the function  
	  
	int size_grid(void)  
	{  
		int n;  
		do  
		{  
			printf("Size: ");  
			scanf("%d", &n);  
		}  
		while (n < 1);  
	}  
	  
	int print_grid(int size)  
	{  
		for (int i = 0; i < size; i++)  
		{  
			for (int j = 0; j < size; j++)  
			{  
				printf("#");  
			}  
			printf("\n");  
		}  
	}