
NAME = libft.a
SOURCES =   ft_atoi.c\
            ft_bzero.c\
            ft_calloc.c\
            ft_isalnum.c\
            ft_isalpha.c\
            ft_isascii.c\
            ft_isdigit.c\
            ft_isprint.c\
            ft_itoa.c\
            ft_memcmp.c\
            ft_memcpy.c\
            ft_memchr.c\
            ft_memmove.c\
            ft_memset.c\
            ft_putendl_fd.c\
            ft_putchar_fd.c\
            ft_putnbr_fd.c\
            ft_putstr_fd.c\
            ft_split.c\
            ft_strdup.c\
            ft_strchr.c\
            ft_striteri.c\
            ft_strjoin.c\
            ft_strlcpy.c\
            ft_strlen.c\
            ft_strmapi.c\
            ft_strncmp.c\
            ft_strnstr.c\
            ft_strrchr.c\
            ft_strtrim.c\
            ft_substr.c\
            ft_tolower.c\
            ft_toupper.c	
OBJS = $(SOURCES:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)

clean: 
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME).a

re: fclean all