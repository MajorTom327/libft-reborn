#include "test.h"
#include <libft.h>

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

void ts_isdigit()
{
  suite_start("ft_isdigit");
  test_isdigit();
  suite_end("ft_isdigit");
}