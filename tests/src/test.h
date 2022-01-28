#ifndef TEST_H
#define TEST_H

void suite_start(char *str);
void suite_end(char *str);
void check_cond(int cond, char *msg);
void exit_tests();

void testsuite_isalpha();

#endif