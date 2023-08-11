#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[20];

  printf("Enter your name: ");
  scanf("%[^\n]", name);

  int n = strlen(name);
  printf("%i\n", n);
}
