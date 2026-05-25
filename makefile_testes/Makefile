# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libft tester                               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026                                    #+#    #+#               #
#    Updated: 2026                                   ###   ########.fr         #
#                                                                              #
# **************************************************************************** #

# ─── Compiler & Flags ────────────────────────────────────────────────────────
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror -g
AR		:= ar rcs

# ─── Directories ─────────────────────────────────────────────────────────────
SRC_DIR		:= src
OBJ_DIR		:= obj
TEST_DIR	:= tests

# ─── Library ─────────────────────────────────────────────────────────────────
NAME		:= libft.a

# ─── Sources ─────────────────────────────────────────────────────────────────
# Part 1 - Libc functions
SRCS_PART1 :=	$(SRC_DIR)/ft_isalpha.c \
				$(SRC_DIR)/ft_isdigit.c \
				$(SRC_DIR)/ft_isalnum.c \
				$(SRC_DIR)/ft_isascii.c \
				$(SRC_DIR)/ft_isprint.c \
				$(SRC_DIR)/ft_strlen.c \
				$(SRC_DIR)/ft_memset.c \
				$(SRC_DIR)/ft_bzero.c \
				$(SRC_DIR)/ft_memcpy.c \
				$(SRC_DIR)/ft_memmove.c \
				$(SRC_DIR)/ft_strlcpy.c \
				$(SRC_DIR)/ft_strlcat.c \
				$(SRC_DIR)/ft_toupper.c \
				$(SRC_DIR)/ft_tolower.c \
				$(SRC_DIR)/ft_strchr.c \
				$(SRC_DIR)/ft_strrchr.c \
				$(SRC_DIR)/ft_strncmp.c \
				$(SRC_DIR)/ft_memchr.c \
				$(SRC_DIR)/ft_memcmp.c \
				$(SRC_DIR)/ft_strnstr.c \
				$(SRC_DIR)/ft_atoi.c

# Part 2 - Additional functions
SRCS_PART2 :=	$(SRC_DIR)/ft_calloc.c \
				$(SRC_DIR)/ft_strdup.c \
				$(SRC_DIR)/ft_substr.c \
				$(SRC_DIR)/ft_strjoin.c \
				$(SRC_DIR)/ft_strtrim.c \
				$(SRC_DIR)/ft_split.c \
				$(SRC_DIR)/ft_itoa.c \
				$(SRC_DIR)/ft_strmapi.c \
				$(SRC_DIR)/ft_striteri.c \
				$(SRC_DIR)/ft_putchar_fd.c \
				$(SRC_DIR)/ft_putstr_fd.c \
				$(SRC_DIR)/ft_putendl_fd.c \
				$(SRC_DIR)/ft_putnbr_fd.c

# Bonus - Linked list functions
SRCS_BONUS :=	$(SRC_DIR)/ft_lstnew.c \
				$(SRC_DIR)/ft_lstadd_front.c \
				$(SRC_DIR)/ft_lstlast.c \
				$(SRC_DIR)/ft_lstadd_back.c \
				$(SRC_DIR)/ft_lstdelone.c \
				$(SRC_DIR)/ft_lstclear.c \
				$(SRC_DIR)/ft_lstiter.c \
				$(SRC_DIR)/ft_lstmap.c

ALL_SRCS	:= $(SRCS_PART1) $(SRCS_PART2) $(SRCS_BONUS)

# ─── Objects ─────────────────────────────────────────────────────────────────
OBJS		:= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(ALL_SRCS))

# ─── Header ──────────────────────────────────────────────────────────────────
HEADER		:= $(SRC_DIR)/libft.h

# ─── Colors ──────────────────────────────────────────────────────────────────
GREEN		:= \033[0;32m
YELLOW		:= \033[0;33m
RED			:= \033[0;31m
CYAN		:= \033[0;36m
RESET		:= \033[0m
BOLD		:= \033[1m

# ─── Rules ───────────────────────────────────────────────────────────────────

.PHONY: all clean fclean re bonus test test_part1 test_part2 test_bonus check

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)$(BOLD)✓ $(NAME) compiled successfully!$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I$(SRC_DIR) -c $< -o $@
	@echo "$(CYAN)  Compiled: $<$(RESET)"

bonus: $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)$(BOLD)✓ $(NAME) with bonus compiled successfully!$(RESET)"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(YELLOW)  Cleaned object files$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@rm -f test_runner
	@echo "$(YELLOW)  Cleaned $(NAME) and test binaries$(RESET)"

re: fclean all

# ─── Test Targets ────────────────────────────────────────────────────────────

# Run all tests
test: $(NAME) $(TEST_DIR)/test_all.c
	@echo "$(BOLD)$(CYAN)─────────────────────────────────────────$(RESET)"
	@echo "$(BOLD)$(CYAN)         Running all tests...             $(RESET)"
	@echo "$(BOLD)$(CYAN)─────────────────────────────────────────$(RESET)"
	@$(CC) $(CFLAGS) -I$(SRC_DIR) $(TEST_DIR)/test_all.c -L. -lft -o test_runner
	@./test_runner
	@rm -f test_runner

# Test only Part 1
test_part1: $(NAME) $(TEST_DIR)/test_part1.c
	@echo "$(BOLD)$(CYAN)─────────────────────────────────────────$(RESET)"
	@echo "$(BOLD)$(CYAN)       Running Part 1 tests...            $(RESET)"
	@echo "$(BOLD)$(CYAN)─────────────────────────────────────────$(RESET)"
	@$(CC) $(CFLAGS) -I$(SRC_DIR) $(TEST_DIR)/test_part1.c -L. -lft -o test_runner
	@./test_runner
	@rm -f test_runner

# Test only Part 2
test_part2: $(NAME) $(TEST_DIR)/test_part2.c
	@echo "$(BOLD)$(CYAN)─────────────────────────────────────────$(RESET)"
	@echo "$(BOLD)$(CYAN)       Running Part 2 tests...            $(RESET)"
	@echo "$(BOLD)$(CYAN)─────────────────────────────────────────$(RESET)"
	@$(CC) $(CFLAGS) -I$(SRC_DIR) $(TEST_DIR)/test_part2.c -L. -lft -o test_runner
	@./test_runner
	@rm -f test_runner

# Test only Bonus
test_bonus: $(NAME) $(TEST_DIR)/test_bonus.c
	@echo "$(BOLD)$(CYAN)─────────────────────────────────────────$(RESET)"
	@echo "$(BOLD)$(CYAN)       Running Bonus tests...             $(RESET)"
	@echo "$(BOLD)$(CYAN)─────────────────────────────────────────$(RESET)"
	@$(CC) $(CFLAGS) -I$(SRC_DIR) $(TEST_DIR)/test_bonus.c -L. -lft -o test_runner
	@./test_runner
	@rm -f test_runner

# Check which source files exist in src/
check:
	@echo "$(BOLD)$(CYAN)─────────────────────────────────────────$(RESET)"
	@echo "$(BOLD)$(CYAN)    Checking source files in $(SRC_DIR)/        $(RESET)"
	@echo "$(BOLD)$(CYAN)─────────────────────────────────────────$(RESET)"
	@echo ""
	@echo "$(BOLD)  ── Part 1 ──$(RESET)"
	@for f in ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
			  ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove \
			  ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr \
			  ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi; do \
		if [ -f "$(SRC_DIR)/$$f.c" ]; then \
			echo "  $(GREEN)✓$(RESET)  $$f.c"; \
		else \
			echo "  $(RED)✗$(RESET)  $$f.c  $(RED)(missing)$(RESET)"; \
		fi; \
	done
	@echo ""
	@echo "$(BOLD)  ── Part 2 ──$(RESET)"
	@for f in ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim \
			  ft_split ft_itoa ft_strmapi ft_striteri \
			  ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd; do \
		if [ -f "$(SRC_DIR)/$$f.c" ]; then \
			echo "  $(GREEN)✓$(RESET)  $$f.c"; \
		else \
			echo "  $(RED)✗$(RESET)  $$f.c  $(RED)(missing)$(RESET)"; \
		fi; \
	done
	@echo ""
	@echo "$(BOLD)  ── Bonus ──$(RESET)"
	@for f in ft_lstnew ft_lstadd_front ft_lstlast ft_lstadd_back \
			  ft_lstdelone ft_lstclear ft_lstiter ft_lstmap; do \
		if [ -f "$(SRC_DIR)/$$f.c" ]; then \
			echo "  $(GREEN)✓$(RESET)  $$f.c"; \
		else \
			echo "  $(RED)✗$(RESET)  $$f.c  $(RED)(missing)$(RESET)"; \
		fi; \
	done
	@echo ""
	@if [ -f "$(HEADER)" ]; then \
		echo "  $(GREEN)✓$(RESET)  libft.h"; \
	else \
		echo "  $(RED)✗$(RESET)  libft.h  $(RED)(missing)$(RESET)"; \
	fi
	@echo ""

# ─── Help ────────────────────────────────────────────────────────────────────
help:
	@echo ""
	@echo "$(BOLD)$(CYAN)  libft Makefile — available targets$(RESET)"
	@echo "$(CYAN)  ─────────────────────────────────────────$(RESET)"
	@echo "  $(BOLD)make$(RESET)            Compile $(NAME)"
	@echo "  $(BOLD)make bonus$(RESET)      Compile with bonus (linked list) functions"
	@echo "  $(BOLD)make test$(RESET)       Run all tests (requires tests/test_all.c)"
	@echo "  $(BOLD)make test_part1$(RESET) Run Part 1 tests only"
	@echo "  $(BOLD)make test_part2$(RESET) Run Part 2 tests only"
	@echo "  $(BOLD)make test_bonus$(RESET) Run Bonus tests only"
	@echo "  $(BOLD)make check$(RESET)      Check which .c files exist in src/"
	@echo "  $(BOLD)make clean$(RESET)      Remove object files"
	@echo "  $(BOLD)make fclean$(RESET)     Remove objects + library + test binary"
	@echo "  $(BOLD)make re$(RESET)         fclean + all"
	@echo ""
	@echo "$(BOLD)  Expected project structure:$(RESET)"
	@echo "  $(CYAN)  ."
	@echo "  ├── Makefile"
	@echo "  ├── src/"
	@echo "  │   ├── libft.h"
	@echo "  │   ├── ft_isalpha.c"
	@echo "  │   └── ... (all ft_*.c files)"
	@echo "  └── tests/$(RESET)"
	@echo "      ├── test_all.c"
	@echo "      ├── test_part1.c"
	@echo "      ├── test_part2.c"
	@echo "      └── test_bonus.c"
	@echo ""
