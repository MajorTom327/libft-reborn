#include "test.h"
#include <libft.h>
#include <ctype.h>
#include <stdio.h>

static void test_isalnum_alphapart()
{
  check_cond(ft_isalnum('a') == isalnum('a'), "ft_isalnum('a') == isalnum('a')");
  check_cond(ft_isalnum('A') == isalnum('A'), "ft_isalnum('A') == isalnum('A')");
  check_cond(ft_isalnum('Q') == isalnum('Q'), "ft_isalnum('Q') == isalnum('Q')");
  check_cond(ft_isalnum('q') == isalnum('q'), "ft_isalnum('q') == isalnum('q')");
  check_cond(ft_isalnum('z') == isalnum('z'), "ft_isalnum('z') == isalnum('z')");
  check_cond(ft_isalnum('Z') == isalnum('Z'), "ft_isalnum('Z') == isalnum('Z')");
}
static void test_isalnum_numpart()
{
  check_cond(ft_isalnum('1') == isalnum('1'), "ft_isalnum('1') == isalnum('1')");
  check_cond(ft_isalnum('0') == isalnum('0'), "ft_isalnum('0') == isalnum('0')");
  check_cond(ft_isalnum('5') == isalnum('5'), "ft_isalnum('5') == isalnum('5')");
  check_cond(ft_isalnum('9') == isalnum('9'), "ft_isalnum('9') == isalnum('9')");
  check_cond(ft_isalnum('\0') == isalnum('\0'), "ft_isalnum('\\0') == isalnum('\\0')");
  check_cond(ft_isalnum('\n') == isalnum('\n'), "ft_isalnum('\\n') == isalnum('\\n')");
}

static void test_isalnum_special()
{
  int i = 0;
  while (i < 127)
  {
    char str[512];

    sprintf(str, "ft_isalnum(%c) == isalnum(%c) (%d)", i, i, i);
    check_cond_onlyerror(ft_isalnum(i) == isalnum(i), str);
    i++;
  }
}

void ts_isalnum()
{
  suite_start("ft_isalnum");
  test_isalnum_alphapart();
  test_isalnum_numpart();
  test_isalnum_special();
  suite_end("ft_isalnum");
}