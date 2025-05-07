NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
AR = ar -rcs
LIBFT = ./libft/libft.a
HEADER = inc/push_swap.h

RM = rm -rf

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
TOTAL := $(words $(SRC))

# ANSI colors
ORANGE = $(shell tput setaf 214)
COLOUR_GREEN = \033[0;32m
COLOUR_BLUE = \033[0;34m
COLOUR_RED = \033[0;31m
COLOUR_RED_BG = \033[41m
RESET = $(shell tput sgr0)

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

# Unicode progress bar function

define BLOCK_PROGRESS_BAR
	COUNT=$$(cat .count 2>/dev/null || echo 0); \
	COUNT=$$((COUNT + 1)); \
	echo $$COUNT > .count; \
	PERCENT=$$((100 * $$COUNT / $(TOTAL))); \
	BLOCKS=$$((50 * $$COUNT / $(TOTAL))); \
	BAR=""; \
	for i in `seq 1 $$BLOCKS`; do BAR="$$BAR█"; done; \
	while [ $${#BAR} -lt 50 ]; do BAR="$$BAR▒"; done; \
	printf "\r$(COLOUR_GREEN)Compiling... [%-50s] %3s%%$(RESET)" "$$BAR" "$$PERCENT"; \
	if [ $$COUNT -eq $(TOTAL) ]; then echo ""; fi
endef


# Ensure build directory exists
$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(LIBFT):
	@make -C libft

# Compile each object file with progress bar

$(OBJDIR)/%.o: %.c $(HEADER) Makefile | $(OBJDIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@COUNT=$$(cat .count 2>/dev/null || echo 0); \
	COUNT=$$((COUNT + 1)); \
	echo $$COUNT > .count; \
	PERCENT=$$((100 * $$COUNT / $(TOTAL))); \
	BLOCKS=$$((50 * $$COUNT / $(TOTAL))); \
	BAR=""; \
	for i in `seq 1 $$BLOCKS`; do BAR="$$BAR█"; done; \
	while [ $${#BAR} -lt 50 ]; do BAR="$$BAR▒"; done; \
	printf "\r$(COLOUR_GREEN)Compiling... |%-50s| %3d%%$(RESET)" "$$BAR" "$$PERCENT"; \
	sleep 0.06;


# Build binary
$(NAME): $(OBJ) $(LIBFT)
	@rm -f .count
	@echo ""
	@printf "$(COLOUR_BLUE)Linking executable: %s$(RESET)\n" "$(NAME)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

# Clean with animated bar

clean:
	@FILES_TO_CLEAN=$$(find $(OBJDIR) -type f 2>/dev/null | wc -l); \
	if [ $$FILES_TO_CLEAN -gt 0 ]; then \
		CLEANED=0; \
		while [ $$CLEANED -lt $$FILES_TO_CLEAN ]; do \
			CLEANED=$$((CLEANED + 1)); \
			PERCENT=$$((100 * $$CLEANED / $$FILES_TO_CLEAN)); \
			BLOCKS=$$((50 * $$CLEANED / $$FILES_TO_CLEAN)); \
			BAR=""; \
			for i in `seq 1 $$BLOCKS`; do BAR="$$BAR█"; done; \
			while [ $${#BAR} -lt 50 ]; do BAR="$$BAR▒"; done; \
			printf "\r$(COLOUR_RED)Cleaning... |%-50s| %3s%%$(RESET)" "$$BAR" "$$PERCENT"; \
			sleep 0.06; \
		done; \
		printf "\n$(COLOUR_RED)Cleaning completed!$(RESET)\n"; \
		$(RM) $(OBJDIR); \
	else \
		echo "$(COLOUR_RED)No files to clean.$(RESET)"; \
	fi

fclean: clean
	@printf "$(COLOUR_RED)Removing binary...$(RESET)\n"
	@rm -f $(NAME)

re: fclean all

