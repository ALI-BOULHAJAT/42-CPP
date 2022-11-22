CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = Bureaucrat
CC = c++
SRCS = ./source/main.cpp ./source/Bureaucrat.cpp ./source/Form.cpp ./source/ShrubberyCreationForm.cpp ./source/RobotomyRequestForm.cpp ./source/PresidentialPardonForm.cpp ./source/Intern.cpp

INC = ./include/Bureaucrat.hpp ./include/Form.hpp ./include/ShrubberyCreationForm.hpp ./include/RobotomyRequestForm.hpp ./include/PresidentialPardonForm.hpp ./include/Intern.hpp

OBJS = $(SRCS:.cpp=.o)


.SILENT :

all : $(NAME)
	
$(NAME): $(OBJS)
	@$(CC) $(CPPFLAGS) $^ -o $@

%.o : %.cpp  $(INC) 
	$(CC)  -o $@ -c $< 

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@rm -f *_shrubbery
	
re: fclean $(NAME)