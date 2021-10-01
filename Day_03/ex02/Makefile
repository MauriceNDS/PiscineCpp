CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER =	header/ClapTrap.hpp			\
			header/FragTrap.hpp			\
			header/ScavTrap.hpp

INCLUDES = -I./header

SRCS =	src/ClapTrap.cpp				\
		src/FragTrap.cpp				\
		src/main.cpp					\
		src/ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)

MAIN = fragTrap

RM = rm -rf

all:    $(MAIN)

$(MAIN): $(OBJS)
		$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

%.o: %.cpp	$(HEADER)
		$(CC) $(CFLAGS) -c $<  -o $@ $(INCLUDES)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(MAIN)

re: fclean all

.PHONY: all clean fclean re