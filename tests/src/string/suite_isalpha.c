#include <test.h>
#include <libft.h>
#include <ctype.h>

int test_isalpha_a();
int test_isalpha_number();
int test_isalpha_symbol();

t_uni_suite *suite_isalpha() {
  t_uni_suite *suite = uni_suite_new("isalpha");

  t_uni_test *t1 = uni_test_new("a shoud be alpha", &test_isalpha_a);
  t_uni_test *t2 = uni_test_new("1 shoud not be alpha", &test_isalpha_number);
  t_uni_test *t3 = uni_test_new("$ shoud not be alpha", &test_isalpha_symbol);

  uni_suite_add_test(suite, t1);
  uni_suite_add_test(suite, t2);
  uni_suite_add_test(suite, t3);
  return suite;
}

int test_isalpha_a() {
  return IS_TRUTHY(ft_isalpha('a'));
}

int test_isalpha_number() {
  return IS_FALSY(ft_isalpha('1'));
}

int test_isalpha_symbol() {
  return IS_FALSY(ft_isalpha('$'));
}
