#include <stdio.h>


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

// 1
int factorial(int n)
{
  if (n == 0)
    return 1;
  return n * factorial(n - 1);
};

// 2
float sum(float a, float b) {
  return a + b;
};

// 3
float difference(float a, float b) {
  return a - b;
};

// 4
float product(float a, float b) {
  return a * b;
};

// 5
float fraction(float a, float b) {
  return a / b;
};

// 6
float custom_sqrt(float n) {
   float i, precision = 0.00001;

   for(i = 1; i*i <=n; ++i);  //Integer part
   for(--i; i*i < n; i += precision);  //Fractional part

   return i;
};

// 7
float inverse_sqrt(float number) {
	long i;
	float x2, y;
	const float threehalfs = 1.5F;

	x2 = number * 0.5F;
	y  = number;
	i  = * (long *) &y;  // evil floating point bit level hacking
	i  = 0x5f3759df - (i >> 1);  // what the fuck? 
	y  = * (float *) &i;
	y  = y * (threehalfs - (x2 * y * y));  // 1st iteration

	return y;
};
