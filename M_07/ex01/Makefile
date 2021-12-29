CC = clang++
NAME = Templates101
FLAGS = -std=c++98 -Wall -Wextra -Werror
FILE = main.cpp 
UNAME_S = $(shell uname -s)

all: $(NAME)
	@echo "Creating the program..."
$(NAME):
ifeq ($(UNAME_S),Linux)
	g++ $(FLAGS) $(FILE) -o $(NAME)
else ifeq ($(UNAME_S), Darwing) # must check the correct one for school.
	clang++ $(FLAGS) $(FILE) -o $(NAME)
endif

re: clean all
clean:
	@echo "Deleting the program..."
	@rm -f $(NAME)
fclean: clean
