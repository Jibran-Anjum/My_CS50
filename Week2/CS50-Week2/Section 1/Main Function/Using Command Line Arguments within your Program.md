Let's say that we remove the void from the main function

	int main(void)

The code above becomes;

	int main()

Now within the brackets we can pass command line arguments. Look at the code bellow

	int main(int argc, string argv[])

### What is `argv[]`
It is an array of string, by way of the syntax.

### What is `argc`
It stands for argument count.

# Program
Let's look at the program below;

	#include <stdio.h>
	#include <cs50.h>
	
	int main(int argc, string argv[])
	{
		printf("hello, %s\n", argv[1])
	}

When I run the command within the prompt;

	$ make greet
	$ ./greet David

I'll get the output;

	hello, David

It's used for speeding things up, I don't have to wait to run the program and then wait for the prompt to ask me to enter a value.

As we see in the `printf` function in the program above

	printf("hello, %s\n", argv[1])

What will be the `argv[0]`....

It will be the `./greet` when I run the program