NAME = NumToText
SRCS = main.cpp \
		help.cpp \
		generate.cpp \
		numar.cpp \
		print.cpp \
		
		
HDR = header.h
FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):
	g++ $(FLAGS) -o $(NAME) $(SRCS) -I $(HDR)

clean: 
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
