#include <cs50.h>
#include <stdio.h>

int validate(long number);

string get_flag(long number);

int main()
{
  long card_number = get_long("Number: ");

  if (validate(card_number))
    printf("%s\n", get_flag(card_number));
  else
    printf("INVALID\n");

  return 0;
}

int validate(long number)
{
  int sum = 0;
  int count = 0;

  while (number > 0)
  {
    int digit = number % 10;

    if (count % 2 == 1)
    {
      digit *= 2;

      while (digit > 0)
      {
        sum += digit % 10;
        digit /= 10;
      }
    }
    else
    {
      sum += digit;
    }

    number /= 10;
    count++;
  }

  if (sum % 10 == 0)
  {
    return 1;
  }

  return 0;
}

string get_flag(long number)
{
  if (number >= 340000000000000 && number <= 349999999999999 && number >= 370000000000000 && number <= 379999999999999)
  {
    return "AMEX";
  }
  else if (number >= 5100000000000000 && number <= 5599999999999999)
  {
    return "MASTERCARD";
  }
  else if (number >= 4000000000000 && number <= 4999999999999 || number >= 4000000000000000 && number <= 4999999999999999)
  {
    return "VISA";
  }

  return "INVALID";

  return 0;
}
