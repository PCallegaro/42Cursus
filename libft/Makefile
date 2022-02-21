#Nome do projeto
NAME	=	libft.a

#Variaveis#
#SRCS = Function in .c
SRCS	=	ft_strlen.c ft_isalpha.c ft_isprint.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strncmp.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strlcpy.c

#Change .c in .o files
OBJS	=	$(SRCS:.c=.o)

#Compiling 
CC	= gcc

#Flags 
CFLAGS	=	-Wall	-Werror	-Wextra 

#Remove 
RM = rm -f

#Regras 
all: $(NAME)
	@echo 'Simple compiler named libft.a was created'
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -c $(SRCS)
	@ar rcs $(NAME) $(OBJS)
#Limpa os .o
clean:
	@$(RM) $(OBJS)
#limpa tudo
fclean: clean
	@$(RM) $(NAME)
#limpa e restart 
re: fclean all

#faz com que arquivos de mesmo nome sejam executados sem problemas e erros
.PHONY: all clean fclean re