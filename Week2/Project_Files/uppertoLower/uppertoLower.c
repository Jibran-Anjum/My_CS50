#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[20];
    
    printf("Before: ");
    scanf("%[^\n]", &s);

    printf("After: ");

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", s[i] + 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

