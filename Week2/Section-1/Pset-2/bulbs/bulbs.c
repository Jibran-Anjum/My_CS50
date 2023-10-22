#include <stdio.h>     // to include standard input/output library
#include <string.h>    // to include string manipulation functions


void print_bulbs(int bit);                                // function declaration, having int type parameter that'll hold individual bit
void encode_message(char string[]);                        // function declaration, having char type parameter that'll hold a char value
void convert_to_binary(int decimal, char binary[]);    // function declaration, having int and char type parameters 

int main()
{
    char input[20];

    printf("Input: ");
    scanf("%s", input);
    
    encode_message(input);    // function calling, which passes input (string/array) as its argument
}

void encode_message(char string[])    // function definition
{
    for (int i = 0, len = strlen(string); i < len; i++)
    {
        int to_decimal = (int)string[i];           // converts the char to its decimal/ASCII value and stores in int type variable
        char to_binary[9];                        // char type array
        convert_to_binary(to_decimal, to_binary);    // function calling, passing the arguments toDecimal and toBinary

        for (int j = 0; j < 8; j++)
        {
            print_bulbs(to_binary[j] - '0');       // converts the char value into int
        }
        printf("\n");
    }
}

void convert_to_binary(int decimal, char binary[])    // function definition
{
    for (int i = 7; i >= 0; i--)
    {
        /*
         *Explanation Straight from chatgpt....
         *
         * Extracting Individual Bits:
         *      <-- int bit = (toDecimal >> i) & 1; -->, extracts the 'i'th bit of the decimal number.
         *      The bitwise right shift operation <-- (decimal >> i) --> shifts the bits of the decimal
         *      number to the right by 'i' positions, effectively bringing the desired bit to the least
         *      significant position. The bitwise AND '&' operation with '1' extracts the least significant
         *      bit, which will be either 0 or 1.
        */
        int bit = (decimal >> i) & 1;

        binary[7 - i] = bit + '0';    // here the individual bit value is then converted into char
    }
    binary[8] = '\0';                 // The null character is placed at 9th position of the array. It terminates the string, ensuring it is correctly treated as a string by C functions that work with strings
}



void print_bulbs(int bit) {
    if (bit == 0) {
        printf("⚫");
    } else {
        printf("🟡");
    }
}
