#include <stdio.h>

int main()
{
  long nc = 0;

  while (getchar() != EOF)
    nc = nc + 1;

  printf("Number of characters: %ld\n", nc);
}