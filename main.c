#include "libft.h"
#include <stdio.h>
#include <stddef.h>

//int main()
//{
//    char c = '\0';
//    int res = ft_isascii(c);
//
//    printf("%i", res);
//    return (0);
//}

//int main()
//{
//    char c = '\0';
//    int res = ft_isprint(c);
//
//	printf("%i", res);
//    return (0);
//}

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

//int main()
//{
//    char str[10] = "asdfghjkl";
//
//    printf("%s\n", str);
//	size_t i = 5;
//
//    ft_bzero(str, 'x', i);
//    printf("%s", str);
//    return (0);
//}

//int main()
//{
//    char str[10]= "asdfghl";
//
//    printf("%s\n", str);
//    
//    ft_bzero(str, sizeof(str));
//    printf("%s\n", str);
//    return (0);
//}

//int main()
//{
//    char arr1[20] = "copialo";
//    char arr2[20];
//
//    printf("arr1: %s\n", arr1);
//
//    ft_memcpy(arr2, arr1, 5);
//    printf("arr2: %s\n", arr2);
//    return (0);
//}

int main()
{
    //Copia sin solapamiento
    char str1[] = "Hello, World!";
    printf("Antes de memmove (sin solapamiento): %s\n", str1);
    memmove(str1 + 7, str1, 6);  
    printf("Después de memmove: %s\n\n", str1);

    //Copia con solapamiento, destino después de origen
    char str2[] = "Hello, World!";
    printf("Antes de memmove (solapamiento, destino después): %s\n", str2);
    memmove(str2 + 7, str2, 6); 
    printf("Después de memmove: %s\n\n", str2);

    //Copia con solapamiento, destino dentro del origen
    char str3[] = "Hello, World!";
    printf("Antes de memmove (solapamiento, destino dentro): %s\n", str3);
    memmove(str3 + 2, str3, 5);
    printf("Después de memmove: %s\n\n", str3);

    //Copia sin solapamiento con cadenas diferentes
    char str4[20] = "Goodbye";
    printf("Antes de memmove (sin solapamiento): %s\n", str4);
    memmove(str4 + 8, str4, 7);
    printf("Después de memmove: %s\n\n", str4);

    return 0;
}