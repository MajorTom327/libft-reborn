#include <test.h>
#include <libft.h>
#include <ctype.h>

int test_toupper_a();
int test_toupper_z();
int test_toupper_Z();

t_uni_suite *suite_toupper() {
  t_uni_suite *suite = uni_suite_new("toupper");

  t_uni_test *t1 = uni_test_new("Should be 'A' for 'a'", &test_toupper_a);
  t_uni_test *t2 = uni_test_new("Should be 'Z' for 'z'", &test_toupper_z);
  t_uni_test *t3 = uni_test_new("Should be 'Z' for 'Z'", &test_toupper_Z);

  uni_suite_add_test(suite, t1);
  uni_suite_add_test(suite, t2);
  uni_suite_add_test(suite, t3);

  return suite;
}

int test_toupper_a() {
  return ft_toupper('a') == 'A';
}


int test_toupper_z() {
  return ft_toupper('z') == 'Z';
}

int test_toupper_Z() {
  return ft_toupper('Z') == 'Z';
}
