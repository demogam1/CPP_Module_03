NAME=ClapTrap

CC=clang++

FLAG=-Werror -Wextra -Wall -std=c++98

SRC= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp \

$(NAME):$(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

all:$(NAME)

fclean:
	rm $(NAME)