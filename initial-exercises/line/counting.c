#include <stdio.h>

int main()
{
  int c, nl, nb, nt;

  nl = nb = nt = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
      ++nl;
    else if (c == ' ')
      ++nb;
    else if (c == '\t')
      ++nt;
    else
      continue;
  }

  printf("Number of lines: %d\n", nl);
  printf("Number of blanks: %d\n", nl);
  printf("Number of tabs: %d\n", nl);
}