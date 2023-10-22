#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[20];
    
    printf("Word: ");
    scanf("%s", word);

    int length = strlen(word);
    int words_type_integer[length];

    for (int i = 0; i < length; i++)
    {
        words_type_integer[i] = word[i];
    }

    bool status = false;

    for (int j = 0; j < length; j++)
    {
        if (words_type_integer[j] < words_type_integer[j + 1])
        {
            status = true;
        }
        else
        {
            status = false;
            break;
        }
    }

    if (status)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    printf("\n");
}
