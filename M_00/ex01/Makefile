CC = g++
NAME = phonebook
FLAGS = -Wall -Wextra -Werror
FILE = phonebook.cpp

all: $(NAME)
	@echo "Creating the program..."
$(NAME):
	@$(CC) $(FLAGS) $(FILE) -o $(NAME)
clean:
	@echo "Deleting the program..."
	@rm $(NAME)
re: clean all

