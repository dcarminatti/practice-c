#include <stdio.h>

int main()
{
  int nchars[26];
  int c;
  int highest_occurrence;

  for (int i = 0; i < 26; i++)
    nchars[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if (c >= 'a' && c <= 'z')
      ++nchars[c - 'a'];
    else if (c >= 'A' && c <= 'Z')
      ++nchars[c - 'A'];
  }

  highest_occurrence = nchars[0];
  for (int i = 1; i < 26; i++)
  {
    if (nchars[i] > highest_occurrence)
      highest_occurrence = nchars[i];
  }

  printf("\n\nHISTOGRAM\n+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n");

  for (int i = 0; i < highest_occurrence; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      if (nchars[j] >= highest_occurrence - i)
        printf("# ");
    }

    printf("\n");
  }

  printf("----------------------------------------------------\n");
  for (int i = 0; i < 26; i++)
    printf("%c ", 'A' + i);
  printf("\n");
}