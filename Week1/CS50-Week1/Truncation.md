Computers also suffer from potentially what's called truncation, where especially when you're doing math involving floating-point values that is numbers with decimals you might accidentally unknowingly truncate the value-- that is lose everything after the decimal point.

	#include <stdio.h>  
	  
	int main(void)  
	{  
		long x, y;  
		printf("x: ");  
		scanf("%li", x);  
		printf("y: ");  
		scanf("%li", y);  
		  
		printf("%li", x + y);  
		printf("\n");  
	}

Let's say that we give 1 for x and 3 for y, we expect that the output would be 0.3333-, but we get 0, to solve this we'll use float output;

	#include <stdio.h>
	  
	int main(void)  
	{  
		long x, y;  
		printf("x: ");  
		scanf("%li", x);  
		printf("y: ");  
		scanf("%li", y);  
		float z = x / y;  
		printf("%f\n", z);  
	}

But with that we get 0.000000. This is what we call truncation.

So how to solve it...

For that we use Type Casting...