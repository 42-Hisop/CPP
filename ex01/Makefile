CC= clang++
CFLAGS= -Wall -Wextra -Werror
SRCS= main.cpp	\
	  contact.cpp \
	  phonebook.cpp
NAME= phonebook

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re:fclean all
