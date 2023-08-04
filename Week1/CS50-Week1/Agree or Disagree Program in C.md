In this program, we found out through the user's input that whether he agree or not with a simple (y or n) yes or no input...

	#include <stdio.h>  
	#include <cs50.h>  
	  
	int main()  
	{  
		char c = get_char("Do you agree or not: ");  
		if (c == 'y')  
		{  
			printf("Agreed.\n");  
		}  
		else if (c == 'n')  
		{  
			printf("Not Agreed.\n");  
		}  
	}

→ Note:

⇒ Double quotes are for strings

⇒ Single quotes are for characters (char)

For Capital Y and N:

	#include <stdio.h>  
	#include <cs50.h>  
	  
	int main()  
	{  
		char c = get_char("Do you agree or not: ");  
		if (c == 'y')  
		{  
			printf("Agreed.\n");  
		}  
		else if (c == 'Y')  
		{  
			printf("Agreed.\n");  
		}  
		else if (c == 'n')  
		{  
			printf("Not Agreed.\n");  
		}  
		else if (c == 'N')  
		{  
			printf("Not Agreed.\n");  
		}  
		}

The code above works but it's not what we call good design...

We'll do it the other way:

	#include <stdio.h>  
	#include <cs50.h>  
	  
	int main()  
	{  
		char c = get_char("Do you agree or not: ");  
		if (c == 'y' || c == 'Y')  
		{  
			printf("Agreed.\n");  
		}  
		else if (c == 'n' || c == 'N')  
		{  
			printf("Not Agreed.\n");  
		}  
	}

Here we used a logical operator _or_:

→ It if either one of the two or many conditions is true, it will look at it as if the condition is met and is true do something that is within the conditional

→ But if all of the conditions are falls then it will not execute the statements within the conditional