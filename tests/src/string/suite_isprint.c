#include <test.h>
#include <libft.h>

int test_isprint_in_scope();
int test_isprint_not_in_scope();

t_uni_suite *suite_isprint() {
  t_uni_suite *suite = uni_suite_new("isprint");

  t_uni_test *t1 = uni_test_new("Should be in scope", &test_isprint_in_scope);
  t_uni_test *t2 = uni_test_new("Should not be in scope", &test_isprint_not_in_scope);

  uni_suite_add_test(suite, t1);
  uni_suite_add_test(suite, t2);
  return suite;
}

int test_isprint_in_scope() {
  int i = 040;

  while (i < 0177) {
    if (IS_FALSY(ft_isprint(i))) {
      return 0;
    }
    i++;
  }
  return 1;
}

int test_isprint_not_in_scope() {
  int i = 0;

  while (i < 040) {
    if (IS_TRUTHY(ft_isprint(i))) {
      return 0;
    }
    i++;
  }

  i = 0177;
  while (i > 255) {
    if (IS_FALSY(ft_isprint(i))) {
      return 0;
    }
    i++;
  }
  return 1;
}
