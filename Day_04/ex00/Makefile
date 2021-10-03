CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER =	header/Animal.hpp			\
			header/Cat.hpp				\
			header/Dog.hpp				\
			header/WrongAnimal.hpp		\
			header/WrongCat.hpp

INCLUDES = -I./header

SRCS =	src/Animal.cpp					\
		src/Cat.cpp						\
		src/Dog.cpp						\
		src/main.cpp					\
		src/WrongAnimal.cpp				\
		src/WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

MAIN = dog

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