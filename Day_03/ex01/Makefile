CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER =	ClapTrap.hpp			\
			ScavTrap.hpp

INCLUDES = -I./header

SRCS =	ClapTrap.cpp			\
		main.cpp				\
		ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)

MAIN = scavTrap

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