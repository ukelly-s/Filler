NAME = libft.a

HEADER = libft.h

SRC = ft_abs ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_itoa ft_lstadd ft_lstdel ft_lstdelone ft_lstiter ft_lstmap ft_lstnew ft_memalloc ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_memdel ft_memmove ft_memset ft_putchar  ft_putchar_fd ft_putendl ft_putendl_fd ft_putnbr ft_putnbr_fd ft_putstr ft_putstr_fd ft_strcat ft_strchr ft_strclr ft_strcmp ft_strcpy ft_strdel ft_strdup ft_strequ ft_striter ft_striteri ft_strjoin ft_strlcat ft_strlcpy ft_strlen ft_strmap ft_strmapi ft_strncat ft_strncmp ft_strncpy ft_strnequ ft_strnew ft_strnlen ft_strnstr ft_strrchr ft_strsplit ft_strstr ft_strsub ft_strtrim ft_tolower ft_toupper

SRC_C = $(patsubst %, %.c, $(SRC))

SRC_O = $(patsubst %, %.o, $(SRC))

all: $(NAME)

$(NAME): $(SRC_O) $(HEADER)
	ar rc $(NAME) $?
	ranlib $(NAME)

$(SRC_O): %.o: %.c
	gcc -Wall -Wextra -Werror -c $? -I $(HEADER)

clean:
	/bin/rm -f $(SRC_O)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re