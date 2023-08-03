#include <stdio.h>

int main()
{
  char name[50];
  printf("Enter your name: ");
  scanf("%[^\n]", name);
  printf("Hello %s\n", name);
}
