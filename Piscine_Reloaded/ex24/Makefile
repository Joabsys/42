#VARIAVEIS DO MAKE
#nome da biblioteca
NAME = libft.a

#compilador e flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes

#comandos
# ar usada para junta os .o dentro de uma biblioteca
# r substituir  
#c cria a biblioteca se ela não existe
#s cria indice dentro da lib
AR = ar rcs
RM = rm -f

#diretorios
SDIR = srcs
IDIR = includes

#arquivos fontes
SRCS = ft_putchar.c \
	ft_putnbr.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_swap.c

#caminho completo da fontes
#addprefix : adciona um prefixo ao nome dos arquivos
SRC = $(addprefix $(SDIR)/, $(SRCS))

#objetos
OBJS = $(SRC:.c=.o)

#principal para criar a lib
all: $(NAME)

#Sem essa linha, o Makefile teria que repetir "libft.a" várias vezes.
$(NAME):$(OBJS)
	$(AR)$(NAME)$(OBJS)

#compilacao dos objetos.

$(SDIR/%.o):$(SDIR/%.c)
	$(CC)$(CFLAGS)-c $< -o $@

#remove objetos
clean:
	$(RM)$(OBJS)

fclean:
	$(RM)$(NAME)
	
#recompila tudo
re: fclean all

.PHONY: re all clean fclean
