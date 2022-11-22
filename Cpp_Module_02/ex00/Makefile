CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = Fixed
CC = c++
SRCS = ./source/main.cpp ./source/Fixed.cpp

INC = ./include/Fixed.hpp

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
	rm -f $(NAME)
	
re: fclean $(NAME)
