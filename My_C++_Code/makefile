#!Makefile
DIR_INC = ./include
DIR_SRC = ./src
DIR_OBJ = ./obj
DIR_BIN = ./bin

SRC = $(wildcard $(DIR_SRC)/*.cpp)
OBJ = $(patsubst $(DIR_SRC)/%.cpp, $(DIR_OBJ)/%.o, $(SRC))


TARGET = main

CC = g++

main: $(OBJ)
	$(CC) $(OBJ) -o $(DIR_BIN)/$(TARGET)

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.cpp	
	$(CC) -c $< -o $@ -I $(DIR_INC)

.PHONY:clean
clean:
	rm $(DIR_OBJ)/*
	rm $(DIR_BIN)/*

