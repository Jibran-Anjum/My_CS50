#include <stdio.h>

int main(void)
{
    char answer[50];
    printf("What's your name? ");
    scanf("%s", answer);
    printf("hello, %s\n", answer);
}
