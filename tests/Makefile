NAME=test

SRC_PATH=./src/

SRC_NAME = main.c \
			string/suite_isalpha.c\
			string/suite_isalnum.c\
			string/suite_isdigit.c

OBJ_PATH=./obj/
INC_PATH=./\
		./src\
		../\
		../unicorn/include

INC_NAME=test.h
INC = $(addprefix -I, $(INC_PATH))

CC = gcc
CFLAGS = -Wall -Wextra -Ofast -Os

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

LIB = -L ../ -lft -L ../unicorn/ -lunicorn -lc

### Compilation
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(INC) $(LIB) -o $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $(INC) -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
