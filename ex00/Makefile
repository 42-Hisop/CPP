CC= clang++
CFLAGS= -Wall -Wextra -Werror
SRCS= megaphone.cpp
NAME= megaphone

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all
