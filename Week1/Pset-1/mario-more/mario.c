#include <stdio.h>
#include <stdbool.h>

int main()
{
  int n;
  // Ask for user input
  do
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
  while (true);

  // printing out blocks
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

      printf(" ");

      for (int l = 1; l <= i; l++)
	{
	  printf("#");
	}
      printf("\n");
    }
}
