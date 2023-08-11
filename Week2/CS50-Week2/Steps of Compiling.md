# Pre-Processing

Let's see the code below;

	#include <stdio.h>
	#include <cs50.h>

Any line of code that begins with a hash symbol is called **Pre-processing Directive**. These are simply the lines of code that are initially processed, before anything else.

What it does is that it looks into the two header files (`<stdio.h` and `cs50.h`), and takes everything that is in those files and include it in your source code. Meaning that it simply includes the content of it which includes the functions declared and defined in the header files. For example, in the `stdio.h` header file we have `printf()` function declared in it, in the `cs50.h` file we have the function `get_string()` declared in it.

So what it does is that it simply includes the functions in the header files into your source code.

# Compiling
In this step of compiling, what the compilers do is that they convert the code below;
	
	#include <stdio.h>
	#include <cs50.h>
	
	int main()
	{
		string name = get_string("Enter your name: ");
		printf("Hello, %s", name);
	}

Into assembly code. It's because most of the modern computers understand assembly code more and not much of C.

# Assembling
After the compiling process, when the code is converted to assembly, it's still not machine code. We know that computers only understand machine code that is `0`s and `1`s. So now in this process the assembly code is now converted into machine code (`0`s and `1`s).

# Linking
In the previous step of assembling, the code that I as a programmer wrote will be converted into `0`s and `1`s. There is also the code that I used within the program that I didn't wrote like the `printf` function and the `get_string` function, so in order to include their code, in linking what happens that it converts the file on our computer somewhere that would be let's say `cs50.c` and `stdio.c` into `0`s and `1`s. After that is done, now in this process of linking, it will link the file that I created `hello.c`  with `cs50.c` and `stdio.c` and link them accordingly.