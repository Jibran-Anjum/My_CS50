Let's say that you wanna print out four question marks as in a _Super Mario Brothers_ game, you simply need to do the following;

	#include <stdio.h>  
	  
	int main(void)  
	{  
		for (int i = 0; i < 4; i++)  
		{  
			printf("?");  
		}  
		printf("\n");  
	}

Now that you wanna create a road block in the way, you do the following;

	#include <stdio.h>  
	  
	int main(void)  
	{  
		for (int i = 0; i < 3; i++)  
		{  
			printf("#\n");  
		}  
	}

but if you want a 2 dimensional block; you do the folowing;

	#include <stdio.h>  
	  
	int main(void)  
	{  
		for (int i = 0; i < 3; i++)  
		{  
			for  (int j = 0; j < 3; j++)  
			{  
				printf("#");  
			}  
			printf("\n");  
		}  
	}

If ever in the future, you needed to change the amount of blocks that you need to print out, at that moment you're gonna have to change the value from ‘3’ to anyother value multiple times. So it's better that you simply create a variable that holds that value for you. If in the future you wanna change that value all you need to do is to change the value of the variable.

	#include <stdio.h>  
	  
	int main(void)  
	{  
		int n = 3  
		for (int i = 0; i < n; i++)  
		{  
			for  (int j = 0; j < n; j++)  
			{  
				printf("#");  
			}  
			printf("\n");  
		}  
	}

In order to be extra careful, just so you don't accidentally change the value of n any where else in the code, add _const_ at the beginning of the declaration or initialization of you variable _n_...

	#include <stdio.h>  
	  
	int main(void)  
	{  
		const int n = 3  
		for (int i = 0; i < n; i++)  
		{  
			for  (int j = 0; j < n; j++)  
			{  
				printf("#");  
			}  
			printf("\n");  
		}  
	}

Let's say that we want a user input to create that block...

	#include <stdio.h>  
	  
	int main(void)  
	{  
		int n;  
		do  
		{  
			printf("Size: ");  
			scanf("%d", &n);  
		}  
		while (n < 1);  
		  
		for (int i = 0; i < n; i++)  
		{  
			for  (int j = 0; j < n; j++)  
			{  
				printf("#");  
			}  
			printf("\n");  
		}  
	}

_do-while_, in general, is super useful when you want to get input from the user and make sure it meets certain requirements.