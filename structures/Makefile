#Build module data structure

CC := gcc
SRCDIR := .
BUILDDIR := .
LIBS := libstructures.a
SRCEXT := c

SOURCES := $(shell find $(SRCDIR) -type f -name '*.$(SRCEXT)')
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := 

all: $(LIBS)

$(LIBS): $(OBJECTS)
	ar rcs $(LIBS) $^

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) -r $(BUILDDIR)/*.o $(LIBS)
.PHONY: clean