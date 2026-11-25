NAME := libhash_table.a

CC := cc
CFLAGS := -Wall -Werror -Wextra -g -fsanitize=address

SRC_DIR := ./src
BUILD_DIR := ./build

SRCS := $(shell find $(SRC_DIRS) -name '*.c')
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)
fclean: clean
	rm -rf $(NAME)

re: fclean all
