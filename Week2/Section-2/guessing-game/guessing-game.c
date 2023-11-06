#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int the_user_guess, the_num = 20;
  
  bool condition = true;

  while (condition)
    {
      printf("Your guess: ");
      scanf("%i", &the_user_guess);

      if (the_user_guess < the_num)
	{
	  printf("The number is too low!");
	  condition = true;
	}
      else if (the_user_guess > the_num)
	{
	  printf("The number is too high!");
	  condition = true;
	}
      else
	{
	  printf("%i is the correct guess!!!\n", the_user_guess);
	  condition = false;
	}
    }
  return 0;
}

