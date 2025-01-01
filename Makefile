# Nombre de la librería
NAME = libft.a

# Directorio donde se encuentran los archivos fuente (.c)
SRCS_DIR = srcs

# Directorio donde se encuentran los archivos de encabezado (.h)
INCLUDES_DIR = includes

# Archivos fuente que contienen las funciones
SRCS = $(SRCS_DIR)/ft_putchar.c $(SRCS_DIR)/ft_putstr.c $(SRCS_DIR)/ft_strcmp.c \
       $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_swap.c

# Archivos objeto generados a partir de los archivos fuente (.c)
OBJS = $(SRCS:.c=.o)

# Compilador a utilizar
CC = gcc

# Flags de compilación
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES_DIR)

# Regla por defecto, se ejecuta al invocar "make"
all: $(NAME)

# Regla para crear la librería (solo se recompila si los archivos objeto cambian)
$(NAME): $(OBJS)
        ar rcs $(NAME) $(OBJS)

# Regla para compilar archivos .c en archivos .o (solo recompila si el archivo .c cambia)
%.o: %.c
        $(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar los archivos objeto generados
clean:
        rm -f $(OBJS)

# Regla para limpiar los archivos objeto y la librería generada
fclean: clean
        rm -f $(NAME)

# Regla para eliminar todos los archivos generados y volver a compilar todo desde cero
re: fclean all

# Ejemplos:
# make clean    -> Elimina los archivos .o
# make fclean   -> Elimina los archivos .o y la librería
# make re       -> Elimina todo y recompila todo