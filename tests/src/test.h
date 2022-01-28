#ifndef TEST_H
#define TEST_H

void suite_start(char *str);
void suite_end(char *str);
void check_cond(int cond, char *msg);
void check_cond_onlyerror(int cond, char *msg);
void exit_tests();

void ts_isalpha();
void ts_isdigit();
void ts_isalnum();

#endif