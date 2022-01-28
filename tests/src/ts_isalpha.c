#include "test.h"
#include <libft.h>

static void test_isalpha_c()
{
  check_cond(ft_isalpha('a') == 1, "ft_isalpha('a') == 1");
  check_cond(ft_isalpha('A') == 1, "ft_isalpha('A') == 1");
  check_cond(ft_isalpha('1') == 0, "ft_isalpha('1') == 0");
  check_cond(ft_isalpha('\0') == 0, "ft_isalpha('\\0') == 0");
  check_cond(ft_isalpha('\n') == 0, "ft_isalpha('\\n') == 0");
}

void ts_isalpha()
{
  suite_start("ft_isalpha");
  test_isalpha_c();
  suite_end("ft_isalpha");
}