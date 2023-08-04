Type Casting the a method that is to convert one data type to another by explicitly telling the compiler that you want to do so.

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

So in order to improve the code above we use type casting to get the result that we want...

	#include <stdio.h>  
	  
	int main(void)  
	{  
		long x, y;  
		printf("x: ");  
		scanf("%li", x);  
		printf("y: ");  
		scanf("%li", y);  
		  
		float z = (float) x / (float) y;  
		printf("%f\n", z);  
	}

Now, we're going to get the output 0.333333