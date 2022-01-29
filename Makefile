CC = cl.exe
CFLAGS = /EHsc
RM = rm -rf
SHELL = cmd.exe
.PHONY = all clean

all: fizzbuzz.exe

fizzbuzz.exe: fizzbuzz.cpp
	$(CC) fizzbuzz.cpp $(CFLAGS)

clean:
	$(RM) fizzbuzz.exe fizzbuzz.obj
