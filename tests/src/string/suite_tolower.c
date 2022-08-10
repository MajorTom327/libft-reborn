#include <test.h>
#include <libft.h>
#include <ctype.h>

int test_tolower_A();
int test_tolower_z();
int test_tolower_Z();

t_uni_suite *suite_tolower() {
  t_uni_suite *suite = uni_suite_new("tolower");

  t_uni_test *t1 = uni_test_new("Should be 'a' for 'A'", &test_tolower_A);
  t_uni_test *t2 = uni_test_new("Should be 'z' for 'Z'", &test_tolower_Z);
  t_uni_test *t3 = uni_test_new("Should be 'z' for 'z'", &test_tolower_z);

  uni_suite_add_test(suite, t1);
  uni_suite_add_test(suite, t2);
  uni_suite_add_test(suite, t3);

  return suite;
}

int test_tolower_A() {
  return ft_tolower('A') == 'a';
}


int test_tolower_z() {
  return ft_tolower('z') == 'z';
}

int test_tolower_Z() {
  return ft_tolower('Z') == 'z';
}
