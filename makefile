# Arquivo de Script Makefile
# 
# Aula de EDB1 2018.2
# 09/08/2018 - 30/08/2018
# Clonagem atual para teste [minha implementação] :
# 				git clone https://github.com/gdiael/EDB1_005_ordenacao.git
#
# Gdiael Souto Barros
#

CC = g++

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

PROG1 = $(BIN)/test_sort

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJ1 = $(OBJ)/Sort.o $(OBJ)/main.o
OBJ2 = $(SRC)/Sort.cpp $(SRC)/main.cpp

all: mkdirs $(PROG1)

mkdirs:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

$(PROG1): $(OBJ1)
	$(CC) $(CPPFLAGS) -o $(PROG1) $(OBJ1)

db$(PROG1): $(OBJ1)
	$(CC) -g $(CPPFLAGS) -o $(PROG1) $(OBJ2)

$(OBJ)/Sort.o: $(SRC)/Sort.cpp $(INC)/Sort.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/Sort.cpp -o $(OBJ)/Sort.o

$(OBJ)/main.o: $(SRC)/main.cpp $(INC)/Sort.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

run:
	$(PROG1) ./res/input.txt 50000 1

debug: db$(PROG1)
	gdb $(PROG1)