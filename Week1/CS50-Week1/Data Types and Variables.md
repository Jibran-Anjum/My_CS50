#### _**⇒ Integer (int) Data Type**_

The int data-type is used in order to store integer values.

Integers always take upto 4 bytes of memory (32 bits). Which means the range of values that they can store is necessarily limited to 32 bits worth of information.

The range for positive -> Positive 2 billion

The range for negative -> Negative 2 billion

#### _**⇒ Unsigned Integer (unsigned int) Data Type**_

Unsigned is a qualifier that can be applied to certain data types (including ints), which effectively doubles the positive range of variables of that type, at the cost of no longer being able to use negative values.

⇒ Note: Just so you know, that unsigned is not the only qualifier in the C programming language, there are others like long, short and const...

#### _**⇒ Character (char) Data Type**_

The char data type is used with the variables that will store a single character.

A character takes up to about 1 byte of memory (8 bits). This means the range of values they can store necessarily limited to only 8 bits worth of information.

Thanks to ASCII, we have developed a mapping system for the characters like A, B, C, etc ...to numeric values in the positive side of this range.

#### _**⇒ Floating Point (float) Data Type**_

The floating data type is used for the variables that store a floating-point values, also known as real numbers.

Floating point variables take up to 4 bytes of memory (32 bits).

It's a little complicated to precisely describe the range of a float, but suffice it to say with 32 bit of precision, some of it might be used for integer part, we are limited to how precise we can be.

If the decimal part of a float value get longer and longer, and it has a large/long integer part as well, then it cannot be very precise. Floats has a precision problem.

#### _**⇒ Double (double) Data Type**_

The double data type is used for variables that will store floating point values, also known as real numbers.

The difference is that double are _double_ _precision_. They take upto 8 bytes (64 bits).

With an additional 32 bits of precision relative to floats, double allows us to be able to specify much more precise real numbers.

#### _**⇒ Void (void) Type**_

Void is a type, not a data type.

Functions can have void return type, which just mean that they don't return a value.

The parameter list of a function can also be void, which simply means that the function does not take any parameters or doesn't need any.

Just for now, think of void as a placeholder for ‘nothing', although it is much more complex than that, but for now this will suffice.

→ These above are the five data types within C.

→ However there's more...

**The following are provided by <cs50.h> library**;

#### _**⇒ Boolean (bool) Data Type**_

The bool data type is used with variables that will store a boolean value. More precisely, they're only capable of storing one of these two values;

- **True**
- **False**

#### _**⇒ String (str) Data Type**_

The string data type is used for a variable in which you might wanna store a series of characters, which programmers call them strings.

Strings include words, sentences, paragraphs and the like.

----------------------------------------------------------------------------------------------------------

Later in the course, we're going to encounter **structures** (structs) and **defined types** (typedefs) that afford great flexibility in creating data types you need for your program.

Now let's discuss how to create, manipulate, and otherwise work with variables using these data types.

#### _**⇒ Declaration of a Variable**_

It's pretty simple;

- First thing to do is to specify what type of variable that you want, e.g

int

- Second thing to do is to write down the name of the variables, e.g

`int height;`

Now how do we use the variable;

#### _**⇒ Assignment of a Value**_

After the variable is being created, there is no need to specify the type of that variable anymore, since now the computer already knows what type of data will be stored inside that specific variable.

All you need to do now is to store any value within it.

- First, right down the name of the variable

- Second, we're going to be using an operator, the _assignment operator_ to assign the variable any value

- Third, write down the value that you wanna store inside the variable

- And lastly, fourth, end the statement with a semicolon

`height = 20;`

#### _**⇒ Initialization of a Variable**_

Initialization of a variable is when you declare a variable and assign a value to it at the same time.

`int height = 20;`