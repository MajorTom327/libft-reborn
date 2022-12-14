NAME=libft
CC = clang

SRC_PATH = ./src/

SRC_NAME = \
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_memset.c\
	ft_bzero.c

OBJ_PATH=./obj/
INC_PATH=./

INC_NAME=libft.h
INC = $(addprefix -I, $(INC_PATH))

OBJ_NAME = $(SRC_NAME:.c=.o)

LIB_NAME = libft.a
LIB_PATH = ./
LIB = $(addprefix $(LIB_PATH),$(LIB_NAME))

CFLAGS = -Wall -Wextra -Ofast -Os

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
	@make -C unicorn $@
	@make -C tests $@

fclean: clean
	rm -f $(LIB)
	@make -C unicorn $@
	@make -C tests $@

re: fclean all

test: re
	@echo "Testing libft"
	@make -C unicorn
	@make -C tests re
	@echo ""
	@./tests/test

.PHONY: all clean fclean re
