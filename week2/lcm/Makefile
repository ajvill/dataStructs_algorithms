all: lcm lcm2

OPTS = -pipe -O2 -std=c++11 

OPTS2 = -g3 -Wall -Wextra 

lcm: lcm.cpp
	g++ $(OPTS) lcm.cpp

lcm2: lcm.cpp
	g++ $(OPTS2) -o lcm lcm.cpp

clean:
	rm -f a.out
	rm -f lcm
