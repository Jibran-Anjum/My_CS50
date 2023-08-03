#include <stdio.h>
#include <stdbool.h>

int main()
{
  int n = 0;

  while (true)
    {
      if (n > 0 && n < 9)
	{
	  break;
	}
      else
	{
	  printf("Enter an integer value: ");
	  scanf("%i", &n);
	}
    }

  for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n - i; j++)
	{
	  printf(" ");
	}

      for (int k = 1; k <= i; k++)
	{
	  printf("#");
	}
      printf("\n");
    }
}
