#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);

size_t ft_strlen(const char *str);
int ft_toupper(int c);
int ft_tolower(int c);

void ft_bzero(void *s, size_t n);
void *ft_memset(void *b, int c, size_t len);

#endif
