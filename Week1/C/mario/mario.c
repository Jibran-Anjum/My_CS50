#include <stdio.h>

int size_grid(void);
int print_grid(int size);
int main(void)
{
    // Get size of grid
    int n = size_grid();
    // Print a grid of bricks
    print_grid(n);
}

int size_grid(void)
{
    int n;
    do
    {
        printf("Size: ");
        scanf("%d", &n);
    }
    while (n < 1);
}

int print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
