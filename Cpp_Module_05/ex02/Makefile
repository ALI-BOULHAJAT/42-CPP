CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = Bureaucrat
CC = c++
SRCS = ./source/main.cpp ./source/Bureaucrat.cpp ./source/Form.cpp ./source/ShrubberyCreationForm.cpp ./source/RobotomyRequestForm.cpp ./source/PresidentialPardonForm.cpp

INC = ./include/Bureaucrat.hpp ./include/Form.hpp ./include/ShrubberyCreationForm.hpp ./include/RobotomyRequestForm.hpp ./include/PresidentialPardonForm.hpp

OBJS = $(SRCS:.cpp=.o)


.SILENT :

all : $(NAME)
	
$(NAME): $(OBJS) $(INC)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp  $(INC) 
	$(CC) $(CPPFLAGS) -o $@ -c $< 

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@rm -f *_shrubbery
	
re: fclean $(NAME)