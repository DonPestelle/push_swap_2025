NAME = push_swap.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

LIBFT = ./libft/libft.a
HEADER = inc/push_swap.h

SRC = ./src/sort_three.c \
      ./src/operations/push.c \
      ./src/operations/swap.c \
      ./src/operations/rotate.c \
      ./src/operations/rev_rotate.c \
      ./src/stack/int_stack_a.c \
      ./src/stack/stack_len.c \
      ./src/stack/stack_sorted.c \
      ft_split.c \
      push_swap.c

OBJDIR = build
OBJ = $(SRC:.c=.o)
OBJ := $(addprefix $(OBJDIR)/, $(OBJ))

# ANSI Escape Code for Bright Orange (256 color mode)
ORANGE = $(shell tput setaf 214)
RESET  = $(shell tput sgr0)

# Default rule
all: banner $(NAME)

# Banner
banner:
	@echo ""
	@echo "$(ORANGE) ______________________________________ $(RESET)"
	@echo "$(ORANGE)|                                      |$(RESET)"
	@echo "$(ORANGE)|           P U S H _ S W A P           |$(RESET)"
	@echo "$(ORANGE)|______________________________________|$(RESET)"
	@echo ""
	@echo "$(ORANGE)               by pestell2             $(RESET)"
	@echo "$(ORANGE)              🚀💻 Sorting magic! 🚀💻   $(RESET)"
	@echo ""

# Ensure build directory exists
$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(LIBFT):
	@make -C libft
# Rule to compile each object file
$(OBJDIR)/%.o: %.c $(HEADER) Makefile | $(OBJDIR)
	@mkdir -p $(dir $@)
	@printf "Compiling: %s\n" "$<"
	@$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the library archive
$(NAME): $(OBJ) $(LIBFT)
	@printf "Building: %s\n" "$(NAME)"
	@$(AR) $(NAME) $(OBJ) $(LIBFT)

# Clean object files and directories
clean:
	@printf "$(ORANGE)Cleaning object files...$(RESET)\n"
	@rm -rf $(OBJDIR)

# Full clean including binary
fclean: clean
	@printf "$(ORANGE)Removing binary: $(NAME)$(RESET)\n"
	@rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re banner

