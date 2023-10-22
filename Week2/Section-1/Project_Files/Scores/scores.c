#include <stdio.h>

const int N = 3;

float average(int array[]);

int main(void)
{
  int scores[N];

  for (int i = 0; i < N; i++)
    {
      printf("Score %i: ", i + 1);
      scanf("%i", &scores[i]);
    }
  
  printf("Average: %f\n", average(scores));
}

float average(int array[])
{
  int sum = 0;
  for (int i = 0; i < N; i++)
    {
      sum += array[i];
    }
  return sum / (float) N;
}
