In order to convert uppercase characters, we need to take out the ASCII chart. There we are aware that both lower and uppercase alphabets have been assigned a distinct value. By further inspection, we find out that the difference between these two types of alphabets is 32.

So for uppercase all we need to do is to subtract 32 from the lowercase value to get upper case.

# `<ctype.h>` library
We can also use a library to convert lowercase to upper case, it's called the `ctype.h` library. There is a function that this library file contains that is `toupper()`, that converts the lowercase character to uppercase.