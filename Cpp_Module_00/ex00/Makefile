CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = megaphone
CC = c++
SRCS = ./megaphone.cpp

OBJS = $(SRCS:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)