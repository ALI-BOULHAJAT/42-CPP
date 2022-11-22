CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = MutantStack
CC = c++
SRCS = ./source/main.cpp

INC = ./include/MutantStack.hpp ./include/MutantStack.tpp

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