#ifndef CONVERT_H_
#define CONVERT_H_

#define OK       0
#define NO_INPUT 1
#define TOO_LONG 2

int get_line(char *prmpt, char *buff, size_t sz);
int make_lower(char *input);
int make_upper(char *input);

#endif
