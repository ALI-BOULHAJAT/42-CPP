CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = Base
CC = c++
SRCS = ./source/Base.cpp ./source/main.cpp

INC = ./include/Base.hpp

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