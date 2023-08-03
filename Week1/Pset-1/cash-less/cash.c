#include <stdio.h>

int get_cents(void);
int calculate_quarters(int);
int calculate_dimes(int);
int calculate_nickles(int);
int calculate_pennies(int);

int main(void)
{
  int cents = get_cents();
  int quarters = calculate_quarters(cents);
  int dimes = calculate_dimes(cents);
  int nickles = calculate_nickles(cents);
  int pennies = calculate_pennies(cents);

  int total_value = quarters + dimes + nickles + pennies;

  printf("%i\n", total_value);
}

int get_cents(void)
{
  int cents;

  do
    {
      printf("Change owed: ");
      scanf("%i", &cents);
    }
  while (cents < 0);
}

int calculate_quarters(int cents)
{
  return cents / 25;
}

int calculate_dimes(int cents)
{
  cents %= 25;
  return cents / 10;
}

int calculate_nickles(int cents)
{
  cents %= 25;
  cents %= 10;
  return cents / 5;
}

int calculate_pennies(int cents)
{
  cents %= 25;
  cents %= 10;
  cents %= 5;
  return cents;
}
