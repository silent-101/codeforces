// Problem Set : 2126A

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int no_of_case;
  scanf("%d", &no_of_case);
  for (int i = 0; i < no_of_case; i++) {
    int x;
    scanf("%d", &x);

    int len = snprintf(NULL, 0, "%d", x);

    char xnum[len + 1];
    sprintf(xnum, "%d", x);

    int y = xnum[0];
    for (int j = 0; xnum[j] != '\0'; j++) {
      if ((int)y > (int)xnum[j]) {
        y = xnum[j];
      }
    }
    if (isalnum(y)) {
      y = y - '0';
      printf("%d\n", y);
    }
  }
  return 0;
}
