NAME = parcare
SRCS = main.cpp \
		parse_help.cpp \
		parse_in.cpp \
		parse_out.cpp \
		
HDR = parcare.h
FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):
	g++ $(FLAGS) -o $(NAME) $(SRCS) -I $(HDR)

clean: 
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
