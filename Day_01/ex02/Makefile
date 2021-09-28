CC = clang++

CFLAGS = -Wall -Wextra -Werror

#HEADER = header/Zombie.hpp


INCLUDES = -I./header

SRCS =	main.cpp


OBJS = $(SRCS:.cpp=.o)

MAIN = res

RM = rm -rf

all:    $(MAIN)

$(MAIN): $(OBJS) #$(HEADER)
		$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

%.o: %.cpp	#$(HEADER)
		$(CC) $(CFLAGS) -c $<  -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(MAIN)

re: fclean all

.PHONY: all clean fclean re