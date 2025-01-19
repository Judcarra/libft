#include <string.h>
#include <stdio.h>

char    *ft_strchr(const char *str, int c)
{
    while(*str != '\0')
    {
        if(*str  == (char)c)
        {
        return (char *)(str);
        }
        str++;
    }

    if (c == '\0')
    {
        return (char *)(str);
    }
    return (NULL);
}

int main()
{
    const char *str = "hola mundo";
    char c = 'd';
    char *result = ft_strchr(str, c);

    if (result){
        printf("caracter '%c' encontrado en %ld\n", c, result - str); //str es la direccion donde empieza la cadena y result la direccion donde esta c. Si se restan, en C, se nos dice la direccion exacta de c en el indice de la cadena  
    }                                                                 //%ld es para imprimir un long integer, que es un tipo de dato numerico que representa numeros enteros de mayor rango que el tipo int. 
    else{
        printf("caracter '%c' no encontrado", c);
    }
    return (0);
}