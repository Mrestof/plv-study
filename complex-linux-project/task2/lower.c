#include <stdio.h>
#include "convert.h"


int main() {
  int rc;
  char buff[100];

  rc = get_line("enter valid string: ", buff, sizeof(buff));
  if (rc == NO_INPUT) {
    // Extra NL since my system doesn't output that on EOF.
    printf ("\nNo input\n");
    return 1;
  }
  if (rc == TOO_LONG) {
    printf ("Input too long [%s]\n", buff);
    return 1;
  }

  make_lower(buff);
  printf("string in lower case: %s\n", buff);
  return 0;
}
