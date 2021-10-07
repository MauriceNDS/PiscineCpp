CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =		main.cpp

OBJS = $(SRCS:.cpp=.o)

MAIN = convert

RM = rm -rf

all:    $(MAIN)

$(MAIN): $(OBJS)
		$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $<  -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(MAIN)

re: fclean all

.PHONY: all clean fclean re