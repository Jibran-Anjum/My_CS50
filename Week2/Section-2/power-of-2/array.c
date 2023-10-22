#include <stdio.h>           // Including stdio library -> standard input/output library

/*
 * Function Prototype/Declaration: User Defined Function -> taking in two parameters of type int
*/
void power_of_two(int n, int val[]);

/*
 * Main function
 */
int main(void)
{
    // Get the length from the user
    int n;

    do
    {
    printf("Enter the length: ");
    scanf("%i", &n);
    }
    while (n < 1);
    
    // Declare the array
    int val[n];

    // Set the first element
    val[0] = 1;

    power_of_two(n, val);    // Function Call -> passing in Two arguments

}

/*
 * Function Definition
*/
void power_of_two(int n, int val[])
{
    for (int i = 1; i < n; i++)
    {
        // Multiplying the previous value by 2
        val[i] = val[i - 1] * 2;
    }

    for (int j = 0; j < n; j++)
    {
        // printing out the value to the console
        printf("%i\n", val[j]);
    }
}

