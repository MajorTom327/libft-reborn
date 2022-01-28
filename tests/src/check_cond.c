#include <stdio.h>
#include <stdlib.h>
#include "test.h"

static int cache_errors()
{
  static int errorsCount = -1;
  errorsCount++;
  return errorsCount;
}

void check_cond(int cond, char *msg)
{
  if (cond == 1)
  {
    printf("\033[32m- ✅ %s\033[0m\n", msg);
    return;
  }
  printf("\033[31m- ❌ %s\033[0m\n", msg);
  cache_errors();
}

void check_cond_onlyerror(int cond, char *msg)
{
  if (cond == 1)
    return;
  printf("\033[31m- ❌ %s\033[0m\n", msg);
  cache_errors();
}

void exit_tests()
{
  const int v = cache_errors();

  if (v > 0)
  {
    printf("\033[31m ❌ %d tests failed\033[0m\n", v);
    exit(1);
  }
  printf("\033[32m ✅ All tests passed\033[0m\n");
}