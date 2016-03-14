all: option1 option2

OPTS = -pipe -O2 -std=c++11 

OPTS2 = -g3 -Wall -Wextra 

option1: covering_segments.cpp
	g++ $(OPTS) covering_segments.cpp

option2: covering_segments.cpp
	g++ $(OPTS2) -o covering_segments  covering_segments.cpp

clean:
	rm -f a.out
	rm -f covering_segments
