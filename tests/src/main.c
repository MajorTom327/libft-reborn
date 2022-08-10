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

  uni_runner_run(runner);
  uni_view_result(runner);
  uni_xml_reporter("./test.xml", runner);
  return uni_get_final_result(runner);
}
