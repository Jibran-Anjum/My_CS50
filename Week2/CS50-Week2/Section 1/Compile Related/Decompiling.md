It is the process that is the opposite to compiling. In this process the code that is in the form of `0`s and `1`s (machine code) back to let's say C programming language.

Downside to decompiling is that normally it is hard to read and understand the code that is in `0`s and `1`s but if you're able to decompile it anyone can decompile the code just so that it is understandable and exploit its vulnerabilities.

However, it's not as simple as it sounds. Even though you would be able to convert the machine code into readable C code, But it would be a mess. Because the variable and function names aren't retained in `0`s and `1`s, the logic of the code would be there but the computer doesn't care about the names that you've given to your functions and variables, it just cares about the fact that the code should be in `0`s and `1`s. 

Loops are also a reason the it would be a mess, because even though we as programmers see the difference between for, while and do-while loops the computer really doesn't care, it's a possibility that the machine code would look exactly the same whether you use while, for or do-while.

In simple words it is much harder, time consuming, and challenging, and costly to reverse engineer it.