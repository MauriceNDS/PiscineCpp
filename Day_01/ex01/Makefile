CC = clang++

CFLAGS = -Wall -Wextra -Werror

HEADER = header/Zombie.hpp


INCLUDES = -I./header

SRCS =	src/main.cpp				\
		src/Zombie.cpp				\
		src/ZombieHorde.cpp


OBJS = $(SRCS:.cpp=.o)

MAIN = zombie

RM = rm -rf

all:    $(MAIN)

$(MAIN): $(OBJS) $(HEADER)
		$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

%.o: %.cpp	$(HEADER)
		$(CC) $(CFLAGS) -c $<  -o $@ $(INCLUDES)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(MAIN)

re: fclean all

.PHONY: all clean fclean re