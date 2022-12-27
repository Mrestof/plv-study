#include <stdio.h>
#include "libcalc.h"


int get_user_int(char* message) {
  int value = 0;

  printf(message);
  if (scanf("%d", &value) != 1) {
    fputs("error: invalid input\n", stderr);
    return 0;
  };
  
  return value;
};

float get_user_float(char* message) {
  float value = 0;

  printf(message);
  if (scanf("%f", &value) != 1) {
    fputs("error: invalid input\n", stderr);
    return 0;
  };
  
  return value;
};
