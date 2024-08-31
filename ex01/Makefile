NAME	=	horde

SRCS	=	main.cpp			\
			Zombie.cpp			\
			zombieHorde.cpp
OBJS	=	$(SRCS:.cpp=.o)

CXX		=	c++
CXXFLAG	=	-Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o : %.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAG) $^ -o $@

clean :
	rm -f $(OBJS)

fclean :
	rm -f ${NAME} $(OBJS)

re :
	make fclean
	make all

.PHONY : all clean fclean re