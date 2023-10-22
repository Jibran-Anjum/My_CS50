Strings are a type of data type within C, they can be used to store group of characters, special symbols, numbers, etc.

The size/length of the strings is *variable*.

A string is just an array of characters.

## How do we know strings end
When we have an integer we know that they always take up *4 bytes*, or double takes *8 bytes*, and characters take only *1 byte*. So the question is how much space does a string takes up???

The way humans decided to implement strings years ago is, indeed, an array, but they added one extra byte at the end of every such string array, just to make clear, with a so-called sentinel value, that the string ends here.

So that if you have two strings in the computer's memory like, `Hi!` and `bye`, you know where the barrier is between the exclamation point of one and the letter B in the next, right? You need some kind of delimiter.

Which means that the space that it'll take will be equal to the total number of characters, plus one extra byte as a delimiter.
