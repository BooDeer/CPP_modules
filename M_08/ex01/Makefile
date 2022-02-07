CC 		= clang++
NAME 	= Span
FLAGS 	= -std=c++98 -Wall -Wextra -Werror \
			-g
HEADER	= span.hpp
FILE	= main.cpp span.cpp

UNAME_S	= $(shell uname -s)

all: $(NAME)
	@echo "Creating the program..."
$(NAME): $(FILE) $(HEADER)
ifeq ($(UNAME_S),Linux)
	g++ $(FLAGS) $(FILE) -o $(NAME)
else ifeq ($(UNAME_S), Darwin) # must check the correct one for school.
	clang++ $(FLAGS) $(FILE) -o $(NAME)
endif

re: clean all
clean:
	@echo "Deleting the program..."
	@rm -f $(NAME)
fclean: clean
