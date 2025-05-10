SRC = src
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c -g
BUILD = build

OBJECTS = $(BUILD)/main.o $(BUILD)/array.o

hello: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BUILD)/dynamicArray

$(BUILD)/main.o: $(SRC)/main.c $(BUILD)
	$(CC) $(CFLAGS) $(SRC)/main.c -o $(BUILD)/main.o

$(BUILD)/array.o: $(SRC)/array.c $(BUILD)
	$(CC) $(CFLAGS) $(SRC)/array.c -o $(BUILD)/array.o

clean:
	rm -f $(SRC)/*.o hello
	rm -rf $(BUILD)/*.o

$(BUILD):
	mkdir -p $(BUILD)