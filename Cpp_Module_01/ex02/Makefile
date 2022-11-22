CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = brain
CC = c++
SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

.SILENT :
	
$(NAME): $(OBJS)
	@$(CC) $(CPPFLAGS) $^ -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	
re: fclean $(NAME)