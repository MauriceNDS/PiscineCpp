CC = clang++

CFLAGS = -Wall -Wextra -Werror

HEADER =	header/Weapon.hpp		\
			header/HumanA.hpp		\
			header/HumanB.hpp


INCLUDES = -I./header

SRCS =	src/HumanA.cpp				\
		src/HumanB.cpp				\
		src/main.cpp				\
		src/Weapon.cpp


OBJS = $(SRCS:.cpp=.o)

MAIN = weapon

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