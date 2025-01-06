NAME	= megaphone
CPFLAGS	= -Wall -Wextra -Werror -std=c++98
CC	= c++
RM	= rm -f
SRC = megaphone.cpp
OBJ	= $(SRC:.cpp=.o)

all:$(NAME)
$(NAME) : $(OBJ)
			@$(CC) $(CPFLAGS) $(OBJ) -o $(NAME)
			@echo "done"
clean : 
		@$(RM) $(OBJ)

fclean :	clean 
			$(RM) $(NAME)

re :  fclean $(NAME)
.PHONY :  all clean fclean
