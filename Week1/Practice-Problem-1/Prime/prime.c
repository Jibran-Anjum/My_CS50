#include <stdio.h>

int main()
{
  int range, flag_val;

  printf("Enter range: ");
  scanf("%i", &range);

  for (int i = 2; i <= range; i++)
    {
      flag_val = 0;
      for (int j = 2; j <= i/2; j++)
	{
	  if (i % j == 0)
	    {
	      flag_val = 1;
	    }
	}
      if (flag_val == 0)
	{
	  printf("%i\n", i);
	}
    }
}
