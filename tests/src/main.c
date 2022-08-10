#include "test.h"
#include <unicorn.h>

int main(void)
{
  t_uni_runner *runner = uni_runner_new();

  uni_runner_add_suite(runner, suite_isalpha());
  uni_runner_add_suite(runner, suite_isalnum());
  uni_runner_add_suite(runner, suite_isalnum());
  uni_runner_add_suite(runner, suite_isascii());
  uni_runner_add_suite(runner, suite_isprint());
  uni_runner_add_suite(runner, suite_strlen());
  uni_runner_add_suite(runner, suite_toupper());
  uni_runner_add_suite(runner, suite_tolower());

  uni_runner_run(runner);
  uni_view_result(runner);
  uni_xml_reporter("./test.xml", runner);

  t_uni_report *report = uni_runner_report(runner);
  if (report->test_failed == 0)
    printf("\033[32mAll tests passed! (%d/%d)\033[0m\n", report->test_passed, report->test_count);
  else
    printf("\033[31m%d tests failed on %d!\033[0m\n", report->test_failed, report->test_count);

  return report->test_failed;
}
