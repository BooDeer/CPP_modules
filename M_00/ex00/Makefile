CC = g++
NAME = megaphone
FLAGS = -Wall -Wextra -Werror
FILE = megaphone.cpp
OBJ = megaphone.o

all: $(NAME)
	@echo "Creating the program..."
$(NAME):
	@$(CC) $(FLAGS) $(FILE) -o $(NAME)
re: clean all
	
clean:
	@echo "Removing the program..."
	@rm megaphone
