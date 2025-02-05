#include <stddef.h>
#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
void    *ft_memset(void *dest, int c, size_t count);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t count);
void    *ft_memmove(void *dest, const void *src, size_t count);
size_t  ft_strlcpy(char *dest, const char *src, size_t count);
size_t  ft_strlcat(char *dest, const char *src, size_t destsize);
int ft_toupper(int ch);
int ft_tolower(int ch);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);
int ft_strncmp(char *s1, char *s2, size_t n);
void    *ft_memchr(void *buf, int c, size_t count);
int    ft_memcmp(void *buf1, void *buf2, size_t count);
char *ft_strnstr(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);
void    *ft_calloc(size_t num, size_t size);
char *ft_strdup(const char *str1);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);

#endif
