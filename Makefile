
CC=gcc

CFLAGS=-Wall -Wextra

TARGET=calculator


OBJECTS=calculator.o main.o


all: $(TARGET)


$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(TARGET) $(OBJECTS)