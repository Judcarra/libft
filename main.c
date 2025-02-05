#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// int main()
//{
//     char c = '+';
//     int res = ft_isascii(c);
//
//     printf("%i", res);
//     return (0);
// }

// int main()
//{
//     char c = '\0';
//     int res = ft_isprint(c);
//
//	printf("%i", res);
//     return (0);
// }

//int	main(void)
//{
//	char	*str;
//	int		count;
//
//	str = "hola buenas";
//	count = ft_strlen(str);
//	printf("%d", count);
//	return (0);
//}

// int main()
//{
//     char str[10] = "asdfghjkl";
//
//     printf("%s\n", str);
//	size_t i = 5;
//
//     ft_bzero(str, 'x', i);
//     printf("%s", str);
//     return (0);
//}

// int main()
//{
//     char str[10]= "asdfghl";
//
//     printf("%s\n", str);
//
//     ft_bzero(str, sizeof(str));
//     printf("%s\n", str);
//     return (0);
// }

// int main()
//{
//     char arr1[20] = "copialo";
//     char arr2[20];
//
//     printf("arr1: %s\n", arr1);
//
//     ft_memcpy(arr2, arr1, 5);
//     printf("arr2: %s\n", arr2);
//     return (0);
// }

// int main()
//{
//     //Copia sin solapamiento
//     char str1[] = "Hello, World!";
//     printf("Antes de memmove (sin solapamiento): %s\n", str1);
//     memmove(str1 + 7, str1, 6);
//     printf("Después de memmove: %s\n\n", str1);
//
//     //Copia con solapamiento, destino después de origen
//     char str2[] = "Hello, World!";
//     printf("Antes de memmove (solapamiento, destino después): %s\n", str2);
//     memmove(str2 + 7, str2, 6);
//     printf("Después de memmove: %s\n\n", str2);
//
//     //Copia con solapamiento, destino dentro del origen
//    char str3[] = "Hello, World!";
//    printf("Antes de memmove (solapamiento, destino dentro): %s\n", str3);
//     memmove(str3 + 2, str3, 5);
//     printf("Después de memmove: %s\n\n", str3);
//
//     //Copia sin solapamiento con cadenas diferentes
//     char str4[20] = "Goodbye";
//     printf("Antes de memmove (sin solapamiento): %s\n", str4);
//     memmove(str4 + 8, str4, 7);
//     printf("Después de memmove: %s\n\n", str4);
//
//     return 0;
// }

// int main()
//{
//     char src[] = "Hello, World!";
//     char dest[10];
//
//     ft_strlcpy(dest, src, sizeof(dest));
//
//     printf("Destino: %s\n", dest);
//     return 0;
// }

// int main(){
//     char dest[30]; memset(dest, 0, 30);
//	 char *src = (char *)" buenas";
//	 strcpy(dest, "hola");
//     size_t result = ft_strlcat(dest, src, 9);
//
//     printf("result: %zu\n", result);
//
//     printf("dest: %s", dest);
//
//     return (0);
// }

//int main()
//{
//    int ch = 's';
//    int result = ft_toupper(ch);
//    printf("%c\n", result);
//    return (0);
//}

//int main()
//{
//    int ch = '[';
//    int result = ft_tolower(ch);
//    printf("%c\n", result);
//    return (0);
//}

//int main()
//{
//    const char *str = "gato guapo";
//    char c = 'u';
//    char *result = ft_strchr(str, c);
//
//    if (result){
//        printf("caracter '%c' encontrado en %ld\n", c, result - str); //str es la direccion donde empieza la cadena y result la direccion donde esta c. Si se restan, en C, se nos dice la direccion exacta de c en el indice de la cadena  
//    }
//    else{
//        printf("caracter '%c' no encontrado", c);
//    }
//    return (0);
//}

//int main()
//{
//    char *str = "gato guapo";
//    char c = 'g';
//    char *result = ft_strrchr(str, c);
//
//    if (result){
//        printf("caracter '%c' encontrado en %ld\n", c, result - str); //str es la direccion donde empieza la cadena y result la direccion donde esta c. Si se restan, en C, se nos dice la direccion exacta de c en el indice de la cadena  
//    }
//    else{
//        printf("caracter '%c' no encontrado", c);
//    }
//    return (0);
//}

//int main()
//{
//    char str1[20] = "abcda";
//    char str2[20] = "abcdX";
//    int result = ft_strncmp(str1, str2, 42);
//
//    printf("%i", result);
//    return (0); 
//}

//int main()
//{
//    char *buf = "compartimento";
//    int c = 'n';
//    char *result = ft_memchr(buf, c, 12);
//
//    if(result){
//        printf("caracter '%c' encontrado en %ld\n", c, result - buf);
//    }
//    else{
//        printf("caracter '%c' no exsite", c, result);
//    }
//    return (0);
//}

//int main()
//{
//    char *buf1 = "hola buenas";
//    char *buf2 = "hola guenas";
//    int result = ft_memcmp(buf1, buf2, 9);
//
//    printf("%i", result);
//    return (0);
//}

//int main()
//{
//    const char *s1 = "hola buenas tardes";
//    const char *s2 = "tardes";
//    char *result = ft_strnstr(s1, s2, 19);
//
//    if (result)
//    {
//        printf("%s\n", result);
//    }
//    else{
//        printf("not found\n");
//    }
//    return (0);
//}

int main()
{
    const char *str = "\t\n\v\f\r1";
    int result = ft_atoi(str);

    printf("result: %i\n", result);
    return (0);
}

//int main() 
//{
//    int *arr = (int*) ft_calloc(5, sizeof(int));
//
//    if (arr == NULL) {
//        printf("Error: No se pudo asignar memoria.\n");
//        return 1;
//    }
//
//    int i = 0;
//    while (i < 5) {
//        printf("%d ", arr[i]);
//        i++;
//    }
//
//    free(arr);
//    return 0;
//}

//int main()
//{
//    char str[] = "hello world";
//    char *copy = ft_strdup(str);
//
//    if (copy == NULL) {
//        perror("Failed to allocate memory");
//        return 1;
//    }
//
//    printf("Original: %s\n", str);
//    printf("Duplicate: %s\n", copy);
//
//    free(copy);
//    return 0;
//}

//int main()
//{
//    char  *str = "holass";
//    char *dest = ft_substr(str, 1, 8);
//
//    printf("%s\n", dest);
//    free(dest);
//    return (0);
//}

//int main()
//{
//    char *str1 = "hola ";
//    char *str2 = "mundo";
//    char *new_str = ft_strjoin(str1, str2);
//
//    printf("%s\n", new_str);
//    free(new_str);
//    return (0);
//}

//int main()
//{
//    char *str1 = " hola buenas  ";
//    char *set = " ";
//    char *new_str = ft_strtrim(str1, set);
//
//    printf("'%s'\n", new_str);
//    free(new_str);
//    return (0);
//}