CC= clang++
CFLAGS= -Wall -Wextra -Werror
SRCS= tests.cpp \
	  Account.cpp
NAME= test

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all
