# Program

In this program we're going to write a code to ask the user for his/her name...

	#include <stdio.h>  
	#include <cs50.h>  

	int main()  
	{  
		char answer[50];  
		printf("Enter your name: ");  
		scanf("%s", &answer);  
		printf("hello, %s\n", answer);  
	}

So %s is known as a **format code** in _C_, specifically for printf. And it just means, _this is a placeholder for a string_. Again, a string is just text. So this means, _hey, computer, print out literally, hello, comma, space, and then not literally %s_. **%s** is treated specially to mean plug in some value here.

→ _**%s:**_ place holder that will eventually be replaced by a variable that holds a string value

→ _**%c:**_ place holder that will eventually be replaced by a variable that holds a character value