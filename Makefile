OBJ_DIR = build
BIN_DIR = bin
SRC_DIR = src
INC_DIR = include
DOC_DIR = doc
 
CC = g++
CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -Iinclude/

RM = rm -rvf

OBJ_01 = $(OBJ_DIR)/quest01
BIN_01 = $(BIN_DIR)/quest01
SRC_01 = $(SRC_DIR)/quest01
INC_01 = $(INC_DIR)/quest01 

OBJ_03 = $(OBJ_DIR)/quest03
BIN_03 = $(BIN_DIR)/quest03
SRC_03 = $(SRC_DIR)/quest03
INC_03 = $(INC_DIR)/quest03 

OBJ_02 = $(OBJ_DIR)/quest02
BIN_02 = $(BIN_DIR)/quest02
SRC_02 = $(SRC_DIR)/quest02
INC_02 = $(INC_DIR)/quest02 

OBJS_QUEST01 = $(OBJ_01)/main.o

OBJS_QUEST02 = $(OBJ_02)/main.o

OBJS_QUEST03 = $(OBJ_03)/main.o

quest01: clean dir quest02 $(OBJS_QUEST01)
	$(CC) -o $(BIN_01)/quest01 $(OBJS_QUEST01)
$(OBJ_01)/main.o: 
	$(CC) $(CPPFLAGS)quest01 -c $(SRC_01)/main.cpp -o $(OBJ_01)/main.o

quest02: quest03 $(OBJS_QUEST02) 
	$(CC) -o $(BIN_02)/quest02 $(OBJS_QUEST02)
$(OBJ_02)/main.o:
	$(CC) $(CPPFLAGS)quest02 -c $(SRC_02)/main.cpp -o $@

quest03: $(OBJS_QUEST03)
	$(CC) -o $(BIN_03)/quest03 $(OBJS_QUEST03)
$(OBJ_03)/main.o: 
	$(CC) $(CPPFLAGS)quest03 -c $(SRC_03)/main.cpp -o $@

dir:
	mkdir -p $(OBJ_01) $(BIN_01) $(OBJ_02) $(BIN_02) $(OBJ_03) $(BIN_03) 

clean:
	$(RM) $(OBJ_DIR)/*
	$(RM) $(BIN_DIR)/*
	
doxy:
	mkdir -p doc/
	doxygen Doxyfile