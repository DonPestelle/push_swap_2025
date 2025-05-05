NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
AR = ar -rcs

LIBFT = ./libft/libft.a
HEADER = inc/push_swap.h

SRC = ./src/sort_three.c \
      ./src/operations/push.c \
      ./src/operations/swap.c \
      ./src/operations/rotate.c \
      ./src/operations/rev_rotate.c \
      ./src/stack/stack_len.c \
      ./src/stack/stack_sorted.c \
      ./src/ft_split.c \
      ./src/push_swap.c \
	  ./src/node/ft_node.c \
	  ./src/stack/free_stack.c \
	  ./src/errors/errors.c  \
	  ./src/stack/init_stack_a.c

OBJDIR = build
OBJ = $(SRC:.c=.o)
OBJ := $(addprefix $(OBJDIR)/, $(OBJ))

# ANSI Escape Code for Bright Orange (256 color mode)
ORANGE = $(shell tput setaf 214)
COLOUR_GREEN=\033[0;32m
COLOUR_BLUE=\033[0;34m
COLOUR_RED=\033[0;31m
RESET  = $(shell tput sgr0)

# Default rule
all: banner $(NAME)

# Banner
banner:
	@echo ""
	@echo "$(ORANGE) ______________________________________ $(RESET)"
	@echo "$(ORANGE)|                                      |$(RESET)"
	@echo "$(ORANGE)|           P U S H _ S W A P          |$(RESET)"
	@echo "$(ORANGE)|______________________________________|$(RESET)"
	@echo ""
	@echo "$(COLOUR_BLUE)              by pestell2             $(RESET)"
	@echo "$(COLOUR_BLUE)        🚀💻 Sorting magic! 🚀💻   $(RESET)"
	@echo ""

# Ensure build directory exists
$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(LIBFT):
	@make -C libft
# Rule to compile each object file
$(OBJDIR)/%.o: %.c $(HEADER) Makefile | $(OBJDIR)
	@mkdir -p $(dir $@)
	@printf "$(COLOUR_GREEN)Compiling: %s\n" "$<"
	@$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the library archive
$(NAME): $(OBJ) $(LIBFT)
	@printf "$(COLOUR_BLUE)Building: %s\n" "$(NAME)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

# Clean object files and directories
clean:
	@printf "$(COLOUR_RED)Cleaning...$(RESET)\n"
	@rm -rf $(OBJDIR)

# Full clean including binary
fclean: clean
	@printf "$(COLOUR_RED)Fcleaning...$(RESET)\n"
	@rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re banner

