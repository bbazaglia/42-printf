# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files and object files
SRC = libftprintf.c  # Add your source files here
OBJ = $(SRC:.c=.o) # Generate a list of object files based on the source files

# Name of the static library
LIB = libftprintf.a

# All rule (default rule)
all: $(LIB)

# Rule to build the static library
$(LIB): $(OBJ)
    ar rc $(LIB) $(OBJ) # Create am archive (LIB) and add files (OBJ) to it 
    ranlib $(LIB) #Update the library index for efficient linking

# Rule to compile source files into object files
%.o: %.c
    $(CC) $(CFLAGS) -c -o $@ $< 

# -c flag tells the compiler to generate an object file
# -o flag tells the compiler where to place the generated output (e.g., object files)
# $@ is an automatic variable that represents the target of the rule
# $< is an automatic variable that represents the first prerequisite (dependency) of the rule

# Rule to clean 
clean:
    rm -f $(OBJ)

# Rule to clean and remove the library
fclean: clean
    rm -f $(LIB)

# Rebuild rule (clean and build)
re: fclean all

# Phony targets (targets that are not actual files)
.PHONY: all clean fclean


