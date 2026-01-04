# Input source files
INPUT = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
        srcs/ft_strlen.c srcs/ft_swap.c

# Output object files
OUTPUT = ${INPUT:.c=.o}

# Default target
all: libft

# Build libft.a from object files
libft: ${OUTPUT} includes/ft.h
	ar rcs libft.a ${OUTPUT} includes/ft.h

# Compile .c files to .o files
compile: ${INPUT}
	gcc -Wall -Wextra -Werror -c ${INPUT} -o ${OUTPUT}

# Clean up object files
clean:
	rm -f srcs/*.o

# Clean up and remove the library file
fclean: clean
	rm -f libft.a

# Rebuild everything (fclean + libft)
re: fclean libft
