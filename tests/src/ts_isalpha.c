#include "test.h"
#include <libft.h>
#include <ctype.h>

static void test_isalpha_c()
{
  check_cond(ft_isalpha('a') == 1, "ft_isalpha('a') == 1");
  check_cond(ft_isalpha('A') == 1, "ft_isalpha('A') == 1");
  check_cond(ft_isalpha('1') == 0, "ft_isalpha('1') == 0");
  check_cond(ft_isalpha('\0') == 0, "ft_isalpha('\\0') == 0");
  check_cond(ft_isalpha('\n') == 0, "ft_isalpha('\\n') == 0");
}

static void test_cmp_isalpha()
{
  check_cond(ft_isalpha('a') == isalpha('a'), "ft_isalpha('a') == isalpha('a')");
  check_cond(ft_isalpha('g') == isalpha('g'), "ft_isalpha('g') == isalpha('g')");
  check_cond(ft_isalpha('z') == isalpha('z'), "ft_isalpha('z') == isalpha('z')");
  check_cond(ft_isalpha('A') == isalpha('A'), "ft_isalpha('A') == isalpha('A')");
  check_cond(ft_isalpha('G') == isalpha('G'), "ft_isalpha('G') == isalpha('G')");
  check_cond(ft_isalpha('Z') == isalpha('Z'), "ft_isalpha('Z') == isalpha('Z')");
  check_cond(ft_isalpha('1') == isalpha('1'), "ft_isalpha('1') == isalpha('1')");
  check_cond(ft_isalpha('\0') == isalpha('\0'), "ft_isalpha('\\0') == isalpha('\\0')");
  check_cond(ft_isalpha('\n') == isalpha('\n'), "ft_isalpha('\\n') == isalpha('\\n')");
}

void ts_isalpha()
{
  suite_start("ft_isalpha");
  test_isalpha_c();
  test_cmp_isalpha();
  suite_end("ft_isalpha");
}