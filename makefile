CC = gcc
CFLAGS = 
TARGET = banana
SOURCE = main.c banana.c
OBJS = $(SOURCE:.c=.o)
INCDIR = 
LIBDIR =
LIBS = 

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)

$(OBJS): $(SOURCE)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SOURCE)

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)