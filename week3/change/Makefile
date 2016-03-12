all: change change2

OPTS = -pipe -O2 -std=c++11 

OPTS2 = -g3 -Wall -Wextra 

change: change.cpp
	g++ $(OPTS) change.cpp

change2: change.cpp
	g++ $(OPTS2) -o change change.cpp

clean:
	rm -f a.out
	rm -f change
