#include <unicorn.h>
#include <libft.h>
#include <string.h>

int test_memset_hello();
int test_memset_partial_hello();

t_uni_suite* suite_memset() {
  t_uni_suite *suite = uni_suite_new("memset");

  t_uni_test *t1 = uni_test_new("memset should set the full word as a char a", &test_memset_hello);
  t_uni_test *t2 = uni_test_new("memset should set only the n char as char a", &test_memset_partial_hello);

  uni_suite_add_test(suite, t1);
  uni_suite_add_test(suite, t2);

  return suite;
}

int test_memset_hello() {
  char *str = strdup("Hello");

  ft_memset(str, (int) 'a', 5);
  return strcmp(str, "aaaaa") == 0;
}

int test_memset_partial_hello() {
  char *str = strdup("Hello");

  ft_memset(str, (int) 'a', 2);
  return strcmp(str, "aallo") == 0;
}
