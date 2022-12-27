#include <stdio.h>
#include "libcalc.h"


int main() {
  printf(
      "operation codes:\n"
      "1: factorial\n"
      "2: sum\n"
      "3: difference\n"
      "4: product\n"
      "5: fraction\n"
      "6: custom_sqrt\n"
      "7: inverse_sqrt\n"
  );

  int opcode = get_user_int("enter operation code: ");

  if (!(1 <= opcode && opcode <= 7)) {
    printf("the code you entered (%d) is not in range from 1 to 7\n");
    return 1;
  } else if (opcode == 1) {
    int value = get_user_int("enter valid integer: ");
    int result = factorial(value);
    printf("result: %d\n", result);
  } else if (opcode == 6 || opcode == 7) {
    float value = get_user_float("enter valid float: ");
    float result;
    switch (opcode) {
      case 6:
        result = custom_sqrt(value);
        break;
      case 7:
        result = inverse_sqrt(value);
        break;
    }
    printf("result: %f\n", result);
  } else {
    float value_a = get_user_float("enter valid float[a]: ");
    float value_b = get_user_float("enter valid float[b]: ");
    float result;
    switch (opcode) {
      case 2:
        result = sum(value_a, value_b);
        break;
      case 3:
        result = difference(value_a, value_b);
        break;
      case 4:
        result = product(value_a, value_b);
        break;
      case 5:
        result = fraction(value_a, value_b);
        break;
    }
    printf("result: %f\n", result);
  }

  return 0;
};
