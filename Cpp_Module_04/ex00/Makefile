CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = Animal

CC = c++

SRCS = ./source/main.cpp ./source/Cat.cpp ./source/Animal.cpp ./source/Dog.cpp ./source/WrongCat.cpp ./source/WrongAnimal.cpp

OBJS = $(SRCS:.cpp=.o)

INC = ./include/Animal.hpp ./include/Cat.hpp ./include/Dog.hpp ./include/WrongAnimal.hpp ./include/WrongCat.hpp

.SILENT :

all : $(NAME)
	
$(NAME): $(OBJS) $(INC)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CPPFLAGS) -o $@ -c $< 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)