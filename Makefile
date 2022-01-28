NAME=libft

SRC_PATH = ./src/

SRC_NAME = ft_isalpha.c

OBJ_PATH=./obj/
INC_PATH=./

INC_NAME=libft.h
INC = $(addprefix -I, $(INC_PATH))

OBJ_NAME = $(SRC_NAME:.c=.o)

LIB_NAME = libft.a
LIB_PATH = ./
LIB = $(addprefix $(LIB_PATH),$(LIB_NAME))

CC = gcc
CFLAGS = -Werror -Wall -Wextra -Ofast -Os

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

#### Compilation
all: $(NAME)

$(NAME): $(OBJ) $(LIB)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $(INC) -o $@ $<

$(LIB):
	@echo "Compiling libft"
	@ar rc $@ $(OBJ)
	@ranlib $@


#### Cleanup rules
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re