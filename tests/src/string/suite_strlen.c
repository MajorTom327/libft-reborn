#include <test.h>
#include <libft.h>
#include <ctype.h>

int test_strlen_a();
int test_strlen_empty();
int test_strlen_long();

t_uni_suite *suite_strlen() {
  t_uni_suite *suite = uni_suite_new("strlen");

  t_uni_test *t1 = uni_test_new("Should be 1 for a char", &test_strlen_a);
  t_uni_test *t2 = uni_test_new("Should be 0 for empty string", &test_strlen_empty);
  t_uni_test *t3 = uni_test_new("Should be long for lorem ipsum", &test_strlen_long);

  uni_suite_add_test(suite, t1);
  uni_suite_add_test(suite, t2);
  uni_suite_add_test(suite, t3);
  return suite;
}

int test_strlen_a() {
  return ft_strlen("a") == 1;
}

int test_strlen_empty() {
  return ft_strlen("") == 0;
}

int test_strlen_long() {
  return ft_strlen("Lorem Ipsum Dolor Sit Amet") == 26;
}
