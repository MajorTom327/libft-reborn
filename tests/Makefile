NAME=test

SRC_PATH=./src/

SRC_NAME = main.c \
			check_suite.c \
			check_cond.c \
			ts_isalpha.c \
			ts_isdigit.c

OBJ_PATH=./obj/
INC_PATH=./\
		../

INC_NAME=test.h
INC = $(addprefix -I, $(INC_PATH))

CC = gcc
CFLAGS = -Wall -Wextra -Ofast -Os

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

LIB = -L ../ -lft

### Compilation
all: $(NAME)

$(NAME): $(OBJ)
	@echo $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(INC) $(LIB) -o $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $(INC) $(LIB) -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
