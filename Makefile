SRC = *.c
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

dev:
	make fclean;git add .; git commit -m 'auto update';git push;cd ../libft-unit-test; make f;cd ../libft; make fclean

re : fclean all

.PHONY : all clean fclean re dev