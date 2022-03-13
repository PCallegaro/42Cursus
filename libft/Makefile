#Nome do projeto
NAME	=	libft.a

#Variaveis#
#SRCS = Function in .c
SRCS	=	ft_strlen.c		\
			ft_isalpha.c	\
			ft_isprint.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_strncmp.c	\
			ft_memset.c		\
			ft_bzero.c		\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_memcpy.c		\
			ft_memcmp.c		\
			ft_memchr.c		\
			ft_memmove.c	\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_itoa.c		\
			ft_split.c		\

BONS	=	ft_lstnew.c			\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c			\

B_OBJ = $(BONS:.c=.o)

#Change .c in .o files
OBJS	=	$(SRCS:.c=.o)

#Compiling 
CC	= gcc

#Flags 
CFLAGS	=	-Wall -Werror -Wextra

#Remove 
RM =	rm -f

#Regras 
all:	$(NAME)

$(NAME):	$(OBJS)
		@ar rcs	$(NAME)	$(OBJS)

bonus:	$(NAME)	$(B_OBJ)
		@ar rcs	$(NAME)	$(OBJS)	$(B_OBJ)

%.o:	%.c
		@$(CC) $(CFLAGS) -c $(^) -o $(@)

#Limpa os .o
clean:
		@$(RM) $(OBJS) $(B_OBJ)
#limpa tudo
fclean: clean
		@$(RM) $(NAME)
#limpa e restart 
re: fclean all

#faz com que arquivos de mesmo nome sejam executados sem problemas e erros
.PHONY: all clean fclean re