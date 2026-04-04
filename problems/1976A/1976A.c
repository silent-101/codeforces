// Problem Set : 1976A

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int no_of_pass, each_pass_len;
  scanf("%d", &no_of_pass);

  for (int i = 0; i < no_of_pass; i++) {
    scanf("%d", &each_pass_len);
    char pass[each_pass_len];
    scanf("%s", pass);

    bool is_valid = false;
    for (int j = 0; pass[j] != '\0'; j++) {
      if (isdigit(pass[j])) {
        if (isdigit(pass[j + 1])) {
          if ((int)pass[j] > (int)pass[j + 1]) {
            is_valid = false;
            break;
          }
        } else {
          is_valid = true;
        }
      } else if (isalpha(pass[j])) {
        if (!islower(pass[j])) {
          is_valid = false;
          break;
        } else if (isdigit(pass[j + 1])) {
          is_valid = false;
          break;
        } else if (isalpha(pass[j + 1])) {
          if (pass[j] > pass[j + 1]) {
            is_valid = false;
            break;
          }
        } else {
          is_valid = true;
        }
      }
    }
    if (is_valid) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }
  return 0;
}
