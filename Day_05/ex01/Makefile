CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER =	header/Bureaucrat.hpp		\
			header/Form.hpp

INCLUDES = -I./header

SRCS =		src/Bureaucrat.cpp			\
			src/Form.cpp				\
			src/main.cpp

OBJS = $(SRCS:.cpp=.o)

MAIN = form

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