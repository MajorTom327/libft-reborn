#include <stdio.h>
#include "test.h"

void suite_start(char *str)
{
  printf("\033[90m######## [ %s ] ########\033[0m\n", str);
}

void suite_end(char *str)
{
  printf("\033[90m######## [ /%s ] ########\033[0m\n\n", str);
}