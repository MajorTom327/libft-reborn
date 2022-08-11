#include <unicorn.h>
#include <libft.h>
#include <string.h>

int test_bzero_hello();
int test_bzero_partial_hello();

t_uni_suite* suite_bzero() {
  t_uni_suite *suite = uni_suite_new("bzero");

  t_uni_test *t1 = uni_test_new("bzero should set the full word as a char \\0", &test_bzero_hello);
  t_uni_test *t2 = uni_test_new("bzero should set only the n char as char \\0", &test_bzero_partial_hello);

  uni_suite_add_test(suite, t1);
  uni_suite_add_test(suite, t2);

  return suite;
}

int test_bzero_hello() {
  char *str = strdup("Hello");

  ft_bzero(str, 5);
  return memcmp(str, "\0\0\0\0\0", 5) == 0;
}

int test_bzero_partial_hello() {
  char *str = strdup("Hello");

  ft_bzero(str, 2);
  return memcmp(str, "\0\0llo", 5) == 0;
}
