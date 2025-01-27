# Nombre de la librería
NAME = libft.a

# Directorio donde se encuentran los archivos fuente (.c)
SRCS_DIR = .

# Directorio donde se encuentran los archivos de encabezado (.h)
INCLUDES_DIR = .

# Archivos fuente que contienen las funciones
SRCS = $(SRCS_DIR)/ft_isalnum.c $(SRCS_DIR)/ft_isalpha.c $(SRCS_DIR)/ft_isdigit.c $(SRCS_DIR)/ft_isascii.c $(SRCS_DIR)/ft_isprint.c $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_memset.c $(SRCS_DIR)/ft_bzero.c $(SRCS_DIR)/ft_memcpy.c $(SRCS_DIR)/ft_memmove.c $(SRCS_DIR)/ft_strlcpy.c $(SRCS_DIR)/ft_strlcat.c $(SRCS_DIR)/ft_toupper.c $(SRCS_DIR)/ft_tolower.c $(SRCS_DIR)/ft_strchr.c $(SRCS_DIR)/ft_strrchr.c $(SRCS_DIR)/ft_strncmp.c $(SRCS_DIR)/ft_memchr.c $(SRCS_DIR)/ft_memcmp.c $(SRCS_DIR)/ft_strnstr.c

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

# Regla para compilar y probar con main.c
test: all
	$(CC) main.c -L. -lft -o programa
	./programa

# Ejemplos:
# make clean    -> Elimina los archivos .o
# make fclean   -> Elimina los archivos .o y la librería
# make re       -> Elimina todo y recompila todo
# make test     -> Compila la librería, compila main.c, y ejecuta el programa
