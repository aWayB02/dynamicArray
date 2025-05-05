SRC = src
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
BUILD = build

# Все объектные файлы в папке src/
OBJECTS = $(BUILD)/main.o $(BUILD)/createArray.o

# Цель для создания исполняемого файла
hello: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BUILD)/hello

# Компиляция main.c
$(BUILD)/main.o: $(SRC)/main.c $(BUILD)
	$(CC) $(CFLAGS) $(SRC)/main.c -o $(BUILD)/main.o

# Компиляция createArray.c
$(BUILD)/createArray.o: $(SRC)/createArray.c $(BUILD)
	$(CC) $(CFLAGS) $(SRC)/createArray.c -o $(BUILD)/createArray.o

# Очистка временных файлов
clean:
	rm -f $(SRC)/*.o hello
	rm -rf $(BUILD)/*.o

$(BUILD):
	mkdir -p $(BUILD)