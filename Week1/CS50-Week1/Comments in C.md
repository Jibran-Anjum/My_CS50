# Comments

It's just an explanatory remark in any terse English that generally explains the next six or so lines, the next chunk or block of code, if you will.

	#include <stdio.h>  
	  
	int main(void)  
	{  
		// Get size of grid  
		int n;  
		do  
		{  
			printf("Size: ");  
			scanf("%d", &n);  
		}  
		while (n < 1);  
		  
		// prints a grid of bricks  
		for (int i = 0; i < n; i++)  
		{  
			for  (int j = 0; j < n; j++)  
			{  
				printf("#");  
			}  
			printf("\n");  
		}  
	}

Comments in _C_ programming language starts with double forward slashes (//), hence declaring that whatever is written after these double slashes is a comment.

→ A comment is just a note to yourself as a programmer.

Comments can be an approximation of what we call pseudocode.

Pseudocode is terse english that gets your point accross.