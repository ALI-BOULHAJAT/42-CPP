CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = violence
CC = c++
SRCS = ./source/Weapon.cpp ./source/HumanA.cpp ./source/HumanB.cpp ./source/main.cpp

INC = ./include/HumanA.hpp ./include/HumanB.hpp ./include/Weapon.hpp

OBJS = $(SRCS:.cpp=.o)

.SILENT :

all : $(NAME)

$(NAME): $(OBJS) $(INC)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp  $(INC) 
	$(CC)  $(CPPFLAGS) -o $@ -c $< 

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	
re: fclean $(NAME)