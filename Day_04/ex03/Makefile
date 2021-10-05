CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER =	header/Character.hpp	\
			header/AMateria.hpp		\
			header/Cure.hpp			\
			header/Ice.hpp			\
			header/ICharacter.hpp	\
			header/IMateriaSource.hpp	\
			header/MateriaSource.hpp

INCLUDES = -I./header

SRCS =		src/Character.cpp	\
			src/AMateria.cpp	\
			src/Cure.cpp			\
			src/Ice.cpp			\
			src/MateriaSource.cpp	\
			src/main.cpp

OBJS = $(SRCS:.cpp=.o)

MAIN = materia

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