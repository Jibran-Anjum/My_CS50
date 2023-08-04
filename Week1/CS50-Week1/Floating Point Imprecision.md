Just as we can't represent as big of an integer as we want using int or long alone because there is going to be an upper bound, there's similarly going to be a bound on just how precise our numbers can be.

	#include <stdio.h>  
	  
	int main(void)  
	{  
		long x, y;  
		printf("x: ");  
		scanf("%li", x);  
		printf("y: ");  
		scanf("%li", y);  
		  
		float z = (float) x / (float) y;  
		printf("%.20f\n", z);  
	}

we get an unusual value. You would think that the output should be 3 20 times but we get this weird approximation, this problem that we face is called **Floating-Point Imprecision**.

If you only have a finite number of bits and, in turn, a finite amount of memory, the computer can really only be so precise intuitively.

So in order to solve this problem we use _double_