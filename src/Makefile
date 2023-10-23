CC=clang++ -std=c++17 -Wall
BIN=pong
SRC=main.cpp Game.cpp Paddle.cpp
OBJ=$(SRC:.cpp=.o)
SFML_FLAGS=-lsfml-graphics -lsfml-window -lsfml-system

$(BIN): $(OBJ)
	$(CC) -g -o $(BIN) $(SFML_FLAGS) $(OBJ)

$(OBJ): $(SRC)
	$(CC) -c $^

clean:
	rm -f $(OBJ) $(BIN)

.PHONY: clean