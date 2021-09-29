CC = clang++

CFLAGS = -Wall -Wextra -Werror

HEADER = Fixed.hpp

INCLUDES = -I./header

SRCS =	Fixed.cpp			\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

MAIN = fixed

RM = rm -rf

all:    $(MAIN)

$(MAIN): $(OBJS)
		$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

%.o: %.cpp	$(HEADER)
		$(CC) $(CFLAGS) -c $<  -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(MAIN)

re: fclean all

.PHONY: all clean fclean re