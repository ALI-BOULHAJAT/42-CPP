CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Materia

CC = c++

FILES = ./source/main.cpp ./source/AMateria.cpp ./source/Character.cpp ./source/Cure.cpp ./source/Ice.cpp ./source/MateriaSource.cpp

OFILES = $(FILES:.cpp=.o)

LIBS = ./include/AMateria.hpp ./include/Character.hpp ./include/Cure.hpp ./include/Ice.hpp ./include/ICharacter.hpp ./include/IMateriaSource.hpp ./include/MateriaSource.hpp

.SILENT :

all : $(NAME)

$(NAME) : $(OFILES) $(LIBS)
	$(CC) $(CPPFLAGS) $(OFILES) -o $(NAME)

%.o : %.cpp  $(LIBS) 
	$(CC) $(CPPFLAGS) -o $@ -c $< 

clean : 
	@rm -rf $(OFILES)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re