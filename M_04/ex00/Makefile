CC = clang++
NAME = itTastesPurple
FLAGS = -std=c++98 -Wall -Wextra -Werror
FILE = main.cpp Cat.cpp Dog.cpp Animal.cpp

all: $(NAME)
	@echo "Creating the program..."
$(NAME):
	@$(CC) $(FLAGS) $(FILE) -o $(NAME)
re: clean all
clean:
	@echo "Deleting the program..."
	@rm -f $(NAME)
fclean: clean