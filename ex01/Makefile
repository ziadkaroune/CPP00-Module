NAME	=	phonebook
CPP		=	c++ -g
SRC		=	main.cpp	Contact.cpp		Phonebook.cpp
OBJ		=	$(SRC:.cpp=.o)
CPFLAGS		=	-Werror	-Wextra	-Wall -std=c++98
RM	=	rm -f

all:$(NAME)
$(NAME)	:	$(OBJ)
			$(CPP)	$(CPFLAGS)	$(OBJ)	-o	$(NAME)
clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean $(NAME)
