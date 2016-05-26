GPP = g++11
CFLAGS = -std=c++11 -Wall
#OBJECTS = Display.o main-square.o Simulator.o
fibobjects = fibonacci.o

all: fibonacci
 
#fibonacci: $(fibobjects)
#	$(GPP) 

%.o: %.cc
	$(GPP) $(CFLAGS) -c $^


clean:
	rm -f *.o *~ *% *# .#* *.h.gch
clean-all: clean
	rm -f fibonacci