#include <stdio.h>
#include <ctype.h>

float calc_hours(int hours[], int size, char output);

int main()
{
    int n;

    printf("Number of weeks taking CS50: ");
    scanf("%i", &n);

    int working_week_hours[n];

    for (int i = 0; i < n; i++)
    {
        printf("Week %i HW Hours: ", i + 1);
        scanf("%i", &working_week_hours[i]);
    }

    char output;

    do
    {
        printf("Enter \'A\' for average, and \'T\' for total: ");
        scanf(" %c", &output);
        output = toupper(output);
    }
    while (output != 'A' && output != 'T');

    float result = calc_hours(working_week_hours, n, output);

    if (output == 'T')
    {
        printf("Total hours: %f", result);
    }
    else if (output == 'A')
    {
        printf("Average hours: %f", result);
    }
}

float calc_hours(int hours[], int size, char output)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += hours[i];
    }
    
    float average = total / (float) size;

    if (output == 'A')
    {
        return average;
    }
    else if (output == 'T')
    {
        return (float) total;
    }
    return 0;
}
