#ifndef TEST_H
#define TEST_H

#include <unicorn.h>

// * String
t_uni_suite *suite_isalpha();
t_uni_suite *suite_isalnum();
t_uni_suite *suite_isalnum();
t_uni_suite *suite_isascii();
t_uni_suite *suite_isprint();
t_uni_suite *suite_strlen();
t_uni_suite *suite_toupper();
t_uni_suite *suite_tolower();

// * Memory
t_uni_suite* suite_bzero();
t_uni_suite* suite_memset();

#endif
