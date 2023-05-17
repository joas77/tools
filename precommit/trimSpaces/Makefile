CC = g++
LANG_STD = -std=c++2a
CFLAGS = $(LANG_STD) -Wall -Wextra -Wpedantic
TEST_FOLDER = ./tests
SRC_FOLDER = ./src
SRC_COMPONENTS  = $(SRC_FOLDER)/*.cpp
INCLUDE_PATH = ./src
TEST_TARGET = testtrimspaces

test:
	$(CC) $(CFLAGS) $(SRC_COMPONENTS)  $(TEST_FOLDER)/*.cpp -o $(TEST_TARGET)
	./$(TEST_TARGET)

clean:
	rm $(TEST_TARGET)