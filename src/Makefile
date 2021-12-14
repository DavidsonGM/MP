IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=../obj
LDIR =../lib

LIBS=-lm

_DEPS = pilha.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = pilha.o test_pilha.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pilha: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.cpplint: pilha.cpp test_pilha.cpp
	cpplint --filter=-build/header_guard pilha.cpp test_pilha.cpp $(DEPS) 

.cppcheck: 
	cppcheck --enable=warning .

.valgrind:
	valgrind --leak-check=full ./pilha
	
.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 