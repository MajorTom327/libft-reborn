#include <test.h>
#include <libft.h>
#include <ctype.h>
#include <limits.h>

int test_isascii_0();
int test_isascii_5();
int test_isascii_a();
int test_isascii_A();
int test_isascii_dollar();
int test_isascii_minus_1();
int test_isascii_INT_MAX();
int test_isascii_INT_MIN();


t_uni_suite *suite_isascii() {
  t_uni_suite *suite = uni_suite_new("isascii");
  t_uni_test *t1 = uni_test_new("0 shoud be ascii", &test_isascii_0);
  t_uni_test *t2 = uni_test_new("5 shoud be ascii", &test_isascii_5);
  t_uni_test *t3 = uni_test_new("a shoud be ascii", &test_isascii_a);
  t_uni_test *t4 = uni_test_new("A shoud be ascii", &test_isascii_A);
  t_uni_test *t5 = uni_test_new("dollar shoud be ascii", &test_isascii_dollar);
  t_uni_test *t6 = uni_test_new("-1 shoud not be ascii", &test_isascii_minus_1);
  t_uni_test *t7 = uni_test_new("INT_MAX shoud not be ascii", &test_isascii_INT_MAX);
  t_uni_test *t8 = uni_test_new("INT_MIN shoud not be ascii", &test_isascii_INT_MIN);

  uni_suite_add_test(suite, t1);
  uni_suite_add_test(suite, t2);
  uni_suite_add_test(suite, t3);
  uni_suite_add_test(suite, t4);
  uni_suite_add_test(suite, t5);
  uni_suite_add_test(suite, t6);
  uni_suite_add_test(suite, t7);
  uni_suite_add_test(suite, t8);

  return suite;
}

int test_isascii_0() {
  return IS_TRUTHY(ft_isascii(0));
}

int test_isascii_5() {
  return IS_TRUTHY(ft_isascii(5));
}

int test_isascii_a() {
  return IS_TRUTHY(ft_isascii('a'));
}

int test_isascii_A() {
  return IS_TRUTHY(ft_isascii('A'));
}

int test_isascii_dollar() {
  return IS_TRUTHY(ft_isascii('$'));
}

int test_isascii_minus_1() {
  return IS_FALSY(ft_isascii(-1));
}

int test_isascii_INT_MAX() {
  return IS_FALSY(ft_isascii(INT_MAX));
}

int test_isascii_INT_MIN() {
  return IS_FALSY(ft_isascii(INT_MIN));
}
