CC = gcc

DEBUG_FLAGS = -g -Wall
RELEASE_FLAGS = -O2

MODE ?= DEBUG

ifeq ($(MODE),DEBUG)
CFLAGS = $(DEBUG_FLAGS)
else
CFLAGS = $(RELEASE_FLAGS)
endif

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c,build/%.o,$(SRC))

COMMON_OBJ = $(filter-out build/add_student.o build/search_student.o build/display_student.o,$(OBJ))

all: add_student search_student display_student

build/%.o: src/%.c
	$(CC) $(CFLAGS) -Iinclude -MMD -c $< -o $@

build/add_main.o: apps/add_main.c
	$(CC) $(CFLAGS) -Iinclude -c $< -o $@

build/search_main.o: apps/search_main.c
	$(CC) $(CFLAGS) -Iinclude -c $< -o $@

build/display_main.o: apps/display_main.c
	$(CC) $(CFLAGS) -Iinclude -c $< -o $@

add_student: build/add_main.o build/add_student.o $(COMMON_OBJ)
	$(CC) $^ -o bin/add_student

search_student: build/search_main.o build/search_student.o $(COMMON_OBJ)
	$(CC) $^ -o bin/search_student

display_student: build/display_main.o build/display_student.o $(COMMON_OBJ)
	$(CC) $^ -o bin/display_student

run:
	./bin/display_student

debug:
	make MODE=DEBUG

release:
	make MODE=RELEASE

clean:
	rm -rf build/*.o build/*.d bin/*

.PHONY: all clean debug release run
