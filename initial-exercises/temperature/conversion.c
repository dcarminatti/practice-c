#include <stdio.h>

int convert(int t);

int main()
{
  int temperature;

  printf("Enter a temperature in Fahrenheit: ");
  scanf("%d", &temperature);

  printf("The temperature in Celsius is: %d\n", convert(temperature));
}

int convert(int t)
{
  return (t - 32) * 5 / 9;
}