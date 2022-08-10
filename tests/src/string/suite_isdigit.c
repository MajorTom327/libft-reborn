#include <test.h>
#include <libft.h>
#include <ctype.h>

int test_isdigit_a();
int test_isdigit_number();
int test_isdigit_symbol();

t_uni_suite *suite_isdigit() {
  t_uni_suite *suite = uni_suite_new("isdigit");

  t_uni_test *t1 = uni_test_new("a shoud not be digit", &test_isdigit_a);
  t_uni_test *t2 = uni_test_new("1 shoud be digit", &test_isdigit_number);
  t_uni_test *t3 = uni_test_new("$ shoud not be digit", &test_isdigit_symbol);

  uni_suite_add_test(suite, t1);
  uni_suite_add_test(suite, t2);
  uni_suite_add_test(suite, t3);
  return suite;
}

int test_isdigit_a() {
  return ft_isalnum('a') == isdigit('a');
}

int test_isdigit_number() {
  return ft_isalnum('1') == isdigit('1');
}

int test_isdigit_symbol() {
  return ft_isalnum('$') == isdigit('$');
}
