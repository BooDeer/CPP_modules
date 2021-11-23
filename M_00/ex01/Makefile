CC = clang++
NAME = phonebook
FLAGS = -std=c++98\
#  -Wall -Wextra -Werror
FILE = PhoneBook.class.cpp Contact.class.cpp

all: $(NAME)
	@echo "Creating the program..."
$(NAME):
	@$(CC) $(FLAGS) $(FILE) -o $(NAME)
re: clean all
clean:
	@echo "Deleting the program..."
	@rm -f $(NAME)
fclean: clean