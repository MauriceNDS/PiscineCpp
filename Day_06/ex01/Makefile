NAME        =       r_cast

SRCS        =       main.cpp
					
OBJS        =       ${SRCS:.cpp=.o}

CFLAGS      =       -Wall -Wextra -Werror -std=c++98

CC			=		clang++

DEP			=		

%.o: %.cpp	$(HEADER)
		$(CC) $(CFLAGS) -c $<  -o $@

all :       $(NAME)

clean :
	$(RM) $(OBJS)

fclean :    clean
	$(RM) $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

$(NAME) :   $(OBJS) $(DEP)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

.PHONY :    all fclean clean re