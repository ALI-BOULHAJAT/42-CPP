CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = horde_zombie
CC = c++
SRCS = ./source/Zombie.cpp ./source/main.cpp ./source/zombieHorde.cpp

INC = ./include/Zombie.hpp

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