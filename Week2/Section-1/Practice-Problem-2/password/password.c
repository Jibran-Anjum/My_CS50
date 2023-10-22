#include <ctype.h>    // isupper, islower, isdigit, !isalnum
#include <stdio.h>    // printf, scanf
#include <stdbool.h>    // true, false... boolean values

bool check(char pass[]);    // Declaration/Prototype of a function

int main(void)
{
    char password[20];    // char variable of length 20
    
    /*
     * Asks for user input
    */
    printf("Password\n-> ");    
    scanf("%s", password);


    /*
     * Function calling
    */
    if (check(password))    // if all of the returned variables are true
    {
        printf("Your Password is Valid.\n");
    }
    else    // otherwise
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol!\n");
    }
}


// Function Definition
bool check(char pass[])
{
    // Assigning bool type variables the bool value 'false'
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSymbol = false;

    // For loop
    for (int i = 0; pass[i] != '\0'; i++)    // int type 'i', where pass[i] not equal to '\0', 'i' increment
    {
        if (isupper(pass[i]))    // if pass[i] upper
        {
            hasUpper = true;    // assigin var 'true'
        }
        else if (islower(pass[i]))    // if pass[i] lower
        {
            hasLower = true;    // assign var 'true'
        }
        else if (isdigit(pass[i]))    // if pass[i] digit
        {
            hasDigit = true;    // assign var 'true'
        }
        else if (!isalnum(pass[i]))    // if pass[i] symbol
        {
            hasSymbol = true;    // assign var 'true'
        }
    }

    return hasUpper && hasLower && hasDigit && hasSymbol;    // return the variables
}
