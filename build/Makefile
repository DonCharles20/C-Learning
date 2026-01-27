# Variables
CC = gcc
CFLAGS = -Wall -g
SRCDIR = ../src
BINDIR = ../bin

# Find all .c files and generate corresponding .exe targets
SOURCES = $(wildcard $(SRCDIR)/*.c)
TARGETS = $(patsubst $(SRCDIR)/%.c,$(BINDIR)/%.exe,$(SOURCES))

# Default target: build all
all: $(BINDIR) $(TARGETS)

# Create bin directory if it doesn't exist
$(BINDIR):
	@mkdir -p $(BINDIR)

# Pattern rule: compile .c files to .exe in bin/
$(BINDIR)/%.exe: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $< -o $@
	@echo Compiled $< to $@

# Clean: remove all executables
clean:
	@rm -f $(BINDIR)/*.exe
	@rm -f $(SRCDIR)/*.exe

.PHONY: all clean