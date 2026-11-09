#include "add.h"
#include "div.h"
#include "mult.h"
#include "sub.h"
#include <stdio.h>

int main() {
  int a = 5;
  int b = 7;
  float c = 4.5;
  float d = 3.2;

  printf("Add: %d + %d = %d", a, b, add_int(a, b));
  printf("sub: %d + %d = %d", a, b, sub_int(a, b));
  printf("div: %f + %f = %f", c, d, div_float(a, b));
  printf("mult: %d + %d = %d", a, b, mult_int(a, b));
}
