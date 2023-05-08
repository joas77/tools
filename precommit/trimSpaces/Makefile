CC = g++
CFLAGS = -Wall
TEST_FOLDER = ./tests
SRC_FOLDER = ./src
SRC_COMPONENTS  = $(SRC_FOLDER)/*.cpp
INCLUDE_PATH = ./src
TEST_TARGET = testtrimspaces

test:
	$(CC) $(CFLAGS) $(TEST_FOLDER)/*.cpp -o $(TEST_TARGET)
	#$(CC) $(CFLAGS) -I"$(INCLUDE_PATH)" $(TEST_FOLDER)/*.cpp -o $(TARGET)

clean:
	rm $(TEST_TARGET)