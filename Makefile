CC = gcc
CFLAGS = -Wall -Wextra -Werror

make:
	$(CC) $(CFLAGS) -o *.c

re:

clean:
	rm -rf *.o

fclean: