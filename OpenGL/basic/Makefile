# C Language Program

EXE = main

SOURCES = $(addsuffix .c, $(EXE))
SOURCES += ../glad.c

OBJS = $(addsuffix .o, $(basename $(SOURCES)))
OBJS += $(addsuffix .o, $(EXE))

CFLAGS = `pkg-config --cflags glfw3`
CFLAGS += -s
LIBFLAGS += `pkg-config --libs glfw3`

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) -o $@ $^ $(LIBFLAGS)
	
.PHONY: clean

clean:
	rm *.o *.exe *.obj *.dll