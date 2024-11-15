SRC =  ft_lstclear_bonus.c   ft_putchar_fd.c  ft_strmapi.c\
ft_atoi.c                ft_lstdelone_bonus.c  ft_putendl_fd.c  ft_strncmp.c\
ft_bzero.c               ft_lstiter_bonus.c    ft_putnbr_fd.c   ft_strncpy.c\
ft_calloc.c              ft_lstlast_bonus.c    ft_putstr_fd.c   ft_strnstr.c\
ft_isalnum.c             ft_lstmap_bonus.c     ft_split.c       ft_strrchr.c\
ft_isalpha.c             ft_lstnew_bonus.c     ft_strchr.c      ft_strtrim.c\
ft_isascii.c             ft_lstsize_bonus.c    ft_strdup.c      ft_substr.c\
ft_isdigit.c             ft_memchr.c           ft_striteri.c    ft_tolower.c\
ft_isprint.c             ft_memcmp.c           ft_strjoin.c     ft_toupper.c\
ft_itoa.c                ft_memcpy.c           ft_strlcat.c\
ft_lstadd_back_bonus.c   ft_memmove.c          ft_strlcpy.c		ft_lstadd_front_bonus.c\
ft_memset.c           ft_strlen.c

NAME = libft.a
OBJ = ${SRC:.c=.o}
OBJ_BONUS = $(SRC:.c=.o) $(BONUS:.c=.o)
FLAGS = -Wall -Wextra -Werror

all : $(NAME)
	@true

$(NAME) :
	gcc -I $(FLAGS) -c $(FLAGS) $(SRC)
	ar -rcs $(NAME) $(OBJ)

bonus : clean
	gcc $(FLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f $(NAME)
	rm -rf $(OBJ)

fclean : 
	rm -f $(NAME)
	rm -rf $(OBJ)

re : fclean all

.PHONY : all clean fclean re dev