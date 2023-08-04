	#include <stdio.h>    
	int main(void)  
	{  
	printf("hello, world\n");  
	}

In order to display 'hello world' on the screen we need to use the _printf_ function inside _C_, then the openning and closing brackets _()_, then in between comes the text ‘hello, world’. One thing to note, when ever you want a string output (alphabetic output) on the display, we write it in between double quotes. We also used /_n_ within the double quotes. Then end the line with a semicolon (its just the syntax).

### Statement:

A _statement_ is a line of code that ends with a semicolon.

### Escape Sequence:

Escape sequences are special symbols that a programming language in this case _C_ understands. These special sequences tells the compiler to do certain actions. Like e.g. \n is a escape sequence that moves the in cursor to the new line.

### What does the `#include <stdio.h>` line do???

The `#_include_` means to include a file, the _stdio.h_ is means **Standard Input and Output**. It simply means that it brings in the functionality for input and output inside the _C_ programming language.