// Problem Set : 2094A

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int no_of_lines;
  scanf("%d", &no_of_lines);
  for (int i = 0; i <= no_of_lines; i++) {
    char allc[1024];
    char c;
    int idx = 0;
    int spaces = 0;
    while ((c = getchar()) != '\n' && c != EOF) {
      if (c == ' ') {
        spaces++;
      }
      allc[idx] = c;
      idx++;
    }
    allc[idx] = '\0';

    char newc[spaces + 2]; // no of words in each sentance. spaces + 2 | +2 for
                           // '\0' otherwise it should be +1
    int crr = 0;
    for (int j = 0; allc[j] != '\0'; j++) {
      if (allc[j] == ' ' && allc[j + 1] != '\0' && allc[j + 1] != ' ') {
        newc[crr++] = allc[j + 1];

      } else if (j == 0 && allc[j] != ' ') {
        newc[crr++] = allc[j];
      }
    }
    newc[crr] = '\0';
    printf("%s\n", newc);
  }
  return 0;
}
