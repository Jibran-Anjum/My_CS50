// Preprocessor Directives
#include <stdio.h>    // printf, scanf, ...
#include <ctype.h>    // toupper, ...

/*
 * User defined function for calculating hours, 
 * it takes in the parameters hours (int type), size (int type) and options (char type)
*/

float calc_hours(int hours[], int size, char options);


/*
 * main function of the program workingHours
*/
int main(void)
{
    int n;    // int type variable that'll store the number of Weeks

    printf("Enter Number of weeks: ");
    scanf("%i", &n);

    int working_hours_week[n];    // int type array that'll store hours worked per week

    for (int i = 0; i < n; i++)
    {
        printf("Enter Hours Week %i: ", i + 1);
        scanf("%i", &working_hours_week[i]);
    }

    char options;    // char type variable that'll store the type of output you desire (total or average)

    do
    {
        printf("Option (T, A): ");
        scanf(" %c", &options);
        options = toupper(options);
    }
    while (options != 'T' && options != 'A');

    float result = calc_hours(working_hours_week, n, options);    // float type variable that stores the return value of calc_hours

    if (options == 'T')
    {
        printf("Total Hours: %f\n", result);    // If options has the value 'T' stored, then print the result
    }
    else if(options == 'A')
    {
        printf("Average hours: %f\n", result);    // If options has the value 'A' stored, then print the result
    }
}

float calc_hours(int hours[], int size, char options)    // calc_hours, taking in 3 parameters
{
    float total = 0;
    float average = 0;

    for (int i = 0; i < size; i++)
    {
        total += hours[i];    // adds the value that is being iterated by the iterator 'i' from the array hours to total
    }

    average = total / (float) size;    // finds the average of total value
   
    if (options == 'T')
    {
        return total;    // returns total if options holds the value 'T'
    }
    else if (options == 'A')
    {
        return average;    // returns average if options holds the value 'A'
    }
    return 0;
}
