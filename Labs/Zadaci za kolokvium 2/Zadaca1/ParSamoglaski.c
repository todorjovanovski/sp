#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int samoglaska(char c)
{
    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    }
    return 0;
}

int main() {

  writeToFile();

  // Vasiot kod zapocnuva od tuka
  FILE * dat = fopen("text.txt", "r");
  int counter = 0, first = 1;
  char c, pred;

  while((c = fgetc(dat)) != EOF)
  {
      if(first == 1)
      {
          first = 0;
      }
      else
      {
          if(samoglaska(c) && samoglaska (pred))
          {
              printf("%c%c\n", tolower(pred), tolower(c));
              counter ++;
          }
      }
      pred = c;
  }
  printf("%d", counter);

  fclose(dat);

  return 0;
}
