If for example we're using three bits to represent values the following might happen;

→ 000 = 0

→ 001 = 1

→ 010 = 2

→ 011 = 3

→ 100 = 4

→ 101 = 5

→ 110 = 6

→ 111 = 7

But if we want to represent a value that is greater than 7, let's say for this example _8_, we know that only the fourth bit will be 1 and the rest will be zero. But the problem is that we only have 3 bits. So what might happen is that since there is no fourth bit the value represented here will be

→ 000 = 0

Why? Because since the fourth bit doesn't exist and you need an output, the 3 bits are converted to 0 and you get the output 0 or some sort of negative value.

This is what we call Integer Overflow. When the required value is greater than the bits present to represent that required value.