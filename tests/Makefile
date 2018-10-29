#Build all module
CC := gcc
SRCEXT := c

#Build test module
TESTDIR := .
BUILDDIR := .
TEST_MODULE := test
TEST_SOURCES := $(shell find $(TESTDIR)/ -type f -name '*.$(SRCEXT)')
TEST_OBJECTS := $(patsubst $(TESTDIR)/%,$(BUILDDIR)/%,$(TEST_SOURCES:.$(SRCEXT)=.o))
LIB := -L../structures/ -lstructures
INC := -I../include/

all: $(TEST_MODULE)

$(TEST_MODULE):
	$(CC) $(CFLAGS) main.c $(INC) $(LIB) -o test
clean:
	rm -r *.o $(TEST_MODULE)
.PHONY: clean