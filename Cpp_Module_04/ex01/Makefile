CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = Animal

CC = c++

FILES = ./source/main.cpp ./source/Cat.cpp ./source/Animal.cpp ./source/Brain.cpp ./source/Dog.cpp

OFILES = $(FILES:.cpp=.o)

LIBS = ./include/Animal.hpp ./include/Cat.hpp ./include/Dog.hpp ./include/Brain.hpp

.SILENT :

all : $(NAME)

$(NAME) : $(OFILES) $(LIBS)
	$(CC) $(CPPFLAGS) $(OFILES) -o $(NAME)

%.o : %.cpp
	$(CC) $(CPPFLAGS) -o $@ -c $< 

clean : 
	@rm -rf $(OFILES)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re