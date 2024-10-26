NAME     = a.out
CFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS     = main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJS     = $(SRCS:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re