#include <stdio.h>

int atoi(const char* str) {
  int num = 0;
  char digit;
  while ((digit = *str++) != '\0') {
    if (digit < '0' || digit > '9') {
      return num;  /* No valid conversion possible */
    }
    num *= 10;
    num += digit - '0';
  }
  return num;
}

int main() {
  printf("%d\n", atoi("123"));  // 123
  printf("%d\n", atoi("0"));    // 0
  printf("%d\n", atoi("abc"));  // 0
  return 0;
}