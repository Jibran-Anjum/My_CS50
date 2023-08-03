#include <stdio.h>
#include <stdbool.h>

int main()
{
  // Ask the user to input the starting size of the llamas alive and then ask the user to input the amount of llamas required by the end.
  int start_size, end_size;

  do
    {
      printf("Start Size: ");
      scanf("%i", &start_size);
    }
  while (start_size < 9);
  
  do
    {
      printf("End Size: ");
      scanf("%i", &end_size);
    }
  while (end_size < start_size);
  
  int total_llamas = start_size;

  int years_passed = 0;
  int llamas_born_each_year = 0;
  int llamas_died_each_year = 0;

  while (total_llamas < end_size)
    {    
      total_llamas = (int) total_llamas + (int) llamas_born_each_year - (int)llamas_died_each_year;
      years_passed++;
      llamas_born_each_year = total_llamas / 3;
      llamas_died_each_year = total_llamas / 4;
    }

  printf("%i\n", years_passed - 1);
}
