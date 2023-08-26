// Preprocessor Directives
#include <stdio.h>    // printf, scanf, ...
#include <string.h>    // strlen, ...

// The function below is declared that takes 1 char type argument
char convert_to_leet(char);

int main(int argc, char *argv[])    // takes command line arguments into the program
{
    if (argc != 2)    // If the length of command-line-argument is not 2, then do the following
    {
        printf("Useage: %s word\n", argv[0]);
        return 1;
    }

    char *word = argv[1];    // char type variable to store the argument within itself
    int length = strlen(word);    // int type variable to store the length of the variable word (it holds the amount of character within the variable word)

    printf("Original word: %s\n", word);

    printf("Leet Version: ");

    for (int i = 0; i < length; i++)
    {
        char leet_char = convert_to_leet(word[i]);    // char type variable that stores the return value of the function
        printf("%c", leet_char);
    }
    printf("\n");

    return 0;
}

char convert_to_leet(char c)    // Function definition that has the parameter of char type
{
    switch (c) {
        case 'a': case 'A':    // if the case is a or A
            return '6';    // return 6
        case 'e': case 'E':    // if the case is e or E
            return '3';    // return 3
        case 'i': case 'I':    // if the case is i or I
            return '1';    // return 1
        case 'o': case 'O':    // if the case is o or O
            return '0';    // return 0
        default:    // if none is the case, then default to
            return c;    // return the default value
    }
    return 0;
}
