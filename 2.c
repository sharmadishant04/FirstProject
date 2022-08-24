#include <stdio.h>

void cesar(char str[], int shift) {
  int i = 0;

  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i]<= 'Z') {
        char c = str[i] - 'A';
        c += shift;
        c = c % 26;
        str[i] = c + 'A';
    }
    i++;
  }
  printf("%s", str);
}

int main()
{
    char str[] = "ABCD";
    cesar(str, 10);
    return 0;
}
