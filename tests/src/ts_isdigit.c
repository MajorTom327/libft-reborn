#include "test.h"
#include <libft.h>
#include <ctype.h>

static void test_isdigit()
{
  check_cond(ft_isdigit('0') == 1, "ft_isdigit('0') == 1");
  check_cond(ft_isdigit('1') == 1, "ft_isdigit('1') == 1");
  check_cond(ft_isdigit('9') == 1, "ft_isdigit('9') == 1");
  check_cond(ft_isdigit('a') == 0, "ft_isdigit('a') == 0");
  check_cond(ft_isdigit('A') == 0, "ft_isdigit('A') == 0");
  check_cond(ft_isdigit('\0') == 0, "ft_isdigit('\\0') == 0");
  check_cond(ft_isdigit('\n') == 0, "ft_isdigit('\\n') == 0");
}

static void test_cmp_isdigit()
{
  check_cond(ft_isdigit('0') == isdigit('0'), "ft_isdigit('0') == isdigit('0')");
  check_cond(ft_isdigit('1') == isdigit('1'), "ft_isdigit('1') == isdigit('1')");
  check_cond(ft_isdigit('9') == isdigit('9'), "ft_isdigit('9') == isdigit('9')");
  check_cond(ft_isdigit('a') == isdigit('a'), "ft_isdigit('a') == isdigit('a')");
  check_cond(ft_isdigit('A') == isdigit('A'), "ft_isdigit('A') == isdigit('A')");
  check_cond(ft_isdigit('\0') == isdigit('\0'), "ft_isdigit('\\0') == isdigit('\\0')");
  check_cond(ft_isdigit('\n') == isdigit('\n'), "ft_isdigit('\\n') == isdigit('\\n')");
}

void ts_isdigit()
{
  suite_start("ft_isdigit");
  test_isdigit();
  test_cmp_isdigit();
  suite_end("ft_isdigit");
}