#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Enter the first value: ");
    scanf("%d", &x);
    
    printf("Enter then second value: ");
    scanf("%d", &y);
    
    if (x < y) {
        printf("x is less than y.\n");
    }
    else if (x > y) {
        printf("x is greater than y.\n");
    }
    else {
        printf("x is equal to y.\n");
    }
    return 0;
}
