#include <stdio.h>
#include <stdlib.h>
#include "test.h"

static int cache_errors()
{
  static int errorsCount = -1;

  return ++errorsCount;
}

void check_cond(int cond, char *msg)
{
  static unsigned int hasAnyError = 0;
  if (cond)
  {
    printf("\033[32m- ✅ %s\033[0m\n", msg);
    return;
  }
  printf("\033[31m- ❌ %s\033[0m\n", msg);
}

void exit_tests()
{
  if (cache_errors() > 0)
  {
    printf("\033[31m- ❌ %d tests failed\033[0m\n", cache_errors());
    exit(1);
  }
  printf("\033[32m ✅ All tests passed\033[0m\n");
}