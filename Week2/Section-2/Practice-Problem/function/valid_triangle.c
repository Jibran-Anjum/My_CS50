/*
Pratice Problem
    Declare and write a function "valid_triangle" that takes three real numbers as input representing the three sides of a triangle
    as its arguments, and output either true or false, depending on whether those three lengths are capable of making a triangle.

    - Rules
        - A triangle may only have sides with positive length
        - The sum of the lengths of any two sides of the triangle must be greater than the length of the third side.
*/

#include <stdio.h>
#include <stdbool.h>

bool valid_triangle();

int main(void)
{
    bool stat = valid_triangle();
    
    if (stat)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    printf("\n");

}

bool valid_triangle()
{
    int num1, num2, num3;

    printf("Enter value of a side of the triangle: ");
    scanf("%i", &num1);
    printf("Enter value of a side of the triangle: ");
    scanf("%i", &num2);
    printf("Enter value of a side of the triangle: ");
    scanf("%i", &num3);

    bool status = true;

    if (num1 < 0 && num2 < 0 && num3 < 0)
    {
        status = false;
    }
    else
    {
        status = true;
    }
    
    if (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1)
    {
        status = true;
    }
    else
    {
        status = false;
    }
    return status;
}
