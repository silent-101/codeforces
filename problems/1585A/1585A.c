// Problem Set : 1585A

#include <stdio.h>

int main(void) {
  int days;
  scanf("%d", &days);
  for (int d = 0; d < days; d++) {
    int n;
    scanf("%d", &n);

    int prev = -1;
    int height = 1;
    for (int a = 0; a < n; a++) {
      int aw;
      scanf("%d", &aw);

      if (aw == 0) {
        if (prev == aw) {
          height = -1;
          prev = -1;
          int c;
          while ((c = getchar()) != '\n' && c != EOF)
            ;
          break;
        } else {
          prev = aw;
        }
      } else if (aw == 1) {
        if (aw == prev) {
          height += 5;
          prev = aw;
        } else {
          height += 1;
          prev = aw;
        }
      }
    }
    printf("%d\n", height);
  }
  return 0;
}
