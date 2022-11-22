CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = replace
CC = c++
SRCS = ./source/main.cpp ./source/Replace.cpp

INC = ./include/Replace.hpp

OBJS = $(SRCS:.cpp=.o)

.SILENT :

all : $(NAME)

$(NAME): $(OBJS) $(INC)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp  $(INC) 
	$(CC)  $(CPPFLAGS) -o $@ -c $< 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf *.replace
	rm -f $(NAME)
	
re: fclean $(NAME)
