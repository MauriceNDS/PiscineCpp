CC = clang++

CFLAGS = -Wall -Wextra -Werror

HEADER = Karen.hpp

INCLUDES = -I./header

SRCS =	Karen.cpp			\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

MAIN = karenFilter

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