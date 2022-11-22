CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = convert
CC = c++
SRCS = ./source/main.cpp ./source/Converter.cpp ./source/arg_char.cpp ./source/arg_int.cpp ./source/arg_double.cpp ./source/arg_float.cpp ./source/special_display.cpp

INC = ./include/Converter.hpp

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