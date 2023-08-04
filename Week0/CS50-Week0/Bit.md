A bit is can only be one of the binary values. That’s correct, it can be a 0 or a 1. The computers contain millions or may be billions of transistors that either be turned on or off. So, think about it, 1 is on and 0 is off. When a transistor is turned on, we say that the bit value that is stored is one and when the transistor is turned off we say that bit value stored is 0.

### Well, How does the computer represents values with only two digits???

In order to represent a value, as we said before it is the sequence in which the bits are stored within the memory of the computer. For Example, let’s say that we have three transistors with us and we want to represent the value 1. So what’ll have to do is that we will assign 1 the right most location and let the rest as 0s. When we have to represent the value 2, we will turn the right most value as 0 and 1 to the next to it.

It all depends on the location at which the binary values are represented and in which sequence.

|Binary|Decimal|
|---|---|
|000|0|
|001|1|
|010|2|
|011|3|
|100|4|
|101|5|
|110|6|
|111|7|

### How does it actually does that???

Since we are aware that the binary is base 2, so what happens is that the on each position from right to left, the power of two raises in 1 incremental order like on the right most side we 2^0 the we have 2^1 and so on.

|2^3|2^2|2^1|2^0|
|---|---|---|---|
|8|4|2|1|
|0|0|0|0|

So that is how it actually works. Since it is base 2, 2 raise to power 0 (2^0) equals to 1 and zero time 1 equals to 0. Then the same with the rest of the values.