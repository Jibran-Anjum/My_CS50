#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[20];
    
    printf("Before: ");
    scanf("%[^\n]", &s);

    printf("After: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}

