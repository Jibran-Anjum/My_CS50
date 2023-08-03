#include <stdio.h>

float calc_bill(float, float, float);

int main() {
  float bill, tax, tip;
  float bill_pay = calc_bill(bill, tax, tip);
  printf("%f\n", bill_pay);
  
}

float calc_bill(float x, float y, float z) {
  float total_amount = 0;
  // Ask for input for x
  printf("Bill before tax and tip: ");
  scanf("%f", &x);

  // Ask for input for y
  printf("Sale tax percent: ");
  scanf("%f", &y);

  // Ask for input for z
  printf("Tip percent: ");
  scanf("%f", &z);

  total_amount = total_amount + x + (x / 100);
  total_amount = total_amount + (x * y / 100);
  total_amount = total_amount + (x * z / 100);
  printf("%f\n", total_amount);
  return total_amount / 2.0;
}

