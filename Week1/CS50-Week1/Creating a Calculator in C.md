# Calculator Program
If you just wanna make a simple calculator that takes two input and then add the two values and gives you the output. Do the following;

	#include <stdio.h>  
	  
	int main(void)  
	{  
		int x, y;  
		printf("x: ");  
		scanf("%i", x);  
		printf("y: ");  
		scanf("%i", y);  
		  
		printf("%i", x + y);  
		printf("\n");  
	}

If you add 2000000000 with 2000000000, we'll get the -294967296 value. Why is that?

The reason this is the situation is because the RAM (Random Access Memory) inside our computer is finite, no matter how high we're going to be counting, the RAM in our computer is going to be finite.

We don't have an infinite number of zeros and ones.

Well, it turns out that computers typically use as many as 32 bits in zeros or ones to represent something like an integer, or in C, an int. So for instance, the smallest number we could represent using 32 ints, of course, using 32 bits, of course, would be zero 32 zeros. And the biggest number we could represent is by changing all of those zeros to ones, which, in this case, will ideally give us a number that equals roughly 4 billion in total. It's actually 4,294,967,295 maximally if you set all 32 of those bits to ones and then do out the actual math.

So we also need to be using this amount of space for negative numbers so in order to do that we'll have to split 4,294,967,295 in half, just so we could use half for positive numbers and half for negative numbers.