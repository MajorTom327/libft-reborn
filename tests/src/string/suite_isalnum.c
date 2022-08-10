#include <test.h>
#include <libft.h>
#include <ctype.h>

int test_isalnum_a();
int test_isalnum_number();
int test_isalnum_symbol();

t_uni_suite *suite_isalnum() {
  t_uni_suite *suite = uni_suite_new("isalnum");

  t_uni_test *t1 = uni_test_new("a shoud be alnum", &test_isalnum_a);
  t_uni_test *t2 = uni_test_new("1 shoud be alnum", &test_isalnum_number);
  t_uni_test *t3 = uni_test_new("$ shoud not be alnum", &test_isalnum_symbol);

  uni_suite_add_test(suite, t1);
  uni_suite_add_test(suite, t2);
  uni_suite_add_test(suite, t3);
  return suite;
}

int test_isalnum_a() {
  return ft_isalnum('a') == isalnum('a');
}

int test_isalnum_number() {
  return ft_isalnum('1') == isalnum('1');
}

int test_isalnum_symbol() {
  return ft_isalnum('$') == isalnum('$');
}
