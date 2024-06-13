#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
  int c, state, nw;

  nw = 0;
  state = IN;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
    }
    else if (state == OUT)
    {
      state = IN;
      ++nw;
    }
  }
  printf("Number of words: %d\n", nw);
}