# Meow Program

Simple program that prints meow:

	#include <stdio.h>  
	  
	int main(void)  
	  
	{  
	printf("meow\n");  
	printf("meow\n");  
	printf("meow\n");  
	}

Let's try a loop:

	#include <stdio.h>  
	  
	int main()  
	{  
		int counter = 0;  
		while (counter > 0)  
		{  
			printf("Meow\n");  
			counter--;  
		}  
	}

The right or cononical way:

	#include <stdio.h>  
	  
	int main()  
	{  
		int i = 0;  
		while (i < 3)  
		{  
			printf("meow\n");  
			i++;  
		}  
	}

The type of loop that we used in the programs above is called a _while_ loop.

Now we'll be talking about _for_ loops.

Let's see an example of for loop:

	#include <stdio.h>  
	  
	int main()  
	{  
		for (int i = 0; i < 3; i++)  
		{  
			printf("meow\n");  
		}
	}
In order to create an _infinite_ loop or _forever_ loop that we did in scratch, we do the following;

	#include <stdbool.h>  
	#include <stdio.h>  
	  
	int main()  
	{  
		while (true)  
		{  
			printf("meow\n")  
		}  
	}