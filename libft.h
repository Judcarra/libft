#include <stddef.h>
#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(char *str);
void *ft_memset(void *dest, int c, size_t count);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t count);
void *memmove(void *dest, const void *src, size_t count);
size_t ft_strlcpy(char *dest, const char *src, size_t count);
size_t ft_strlcat(char *dest, const char *src, size_t destsize);
int    ft_toupper(int ch);
int ft_tolower(int ch);
char *ft_strchr(const char *str, int c);

#endif
