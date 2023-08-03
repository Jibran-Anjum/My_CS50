#include <stdio.h>


/*
  String name input:
  [] -> scanset character -
  \n -> tells to take the input until the next line or new line
  %*c -> reads newline characters and here used * indicates that this newline character is discarded
*/




int main()
{
  char name[50], phone_number[20];

  int age;

  printf("Name: ");
  scanf("%[^\n]%*c", &name);

  printf("Age: ");
  scanf("%i", &age);

  printf("Phone Number: ");
  scanf("%s", &phone_number);
}
