// strnstr searches at most n characters to locate the first occurrence in the string pointed to by s1 of the sequence of characters (excluding the terminating null character) in the string pointed to by s2.
//strnstr returns a pointer to the located string, or a null pointer if the string is not found. If s2 points to a string with zero length, strnstr returns s1.

#include <string.h>
#include <stddef.h>

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t s2len;

    s2len = 0;
    while (s2[s2len] != '\0')
    {
        s2len++;
    }

    if (s2len == 0)
    {
        return ((char*)s1);
    }

    size_t i;

    i = 0;
    while (i + s2len <= n && s1[i] != '\0')
    {
        size_t j;

        j = 0;
        while (j < s2len && s1[i + j] != '\0' && s1[i + j] == s2[j])
        {
            j++;
        }
        if (j == s2len)
        {
            return ((char *)&s1[i]);
        }
        i++;
    }
    return (NULL);
}