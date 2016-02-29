all: gcd gcd2

OPTS = -pipe -O2 -std=c++11 

OPTS2 = -g3 -Wall -Wextra 

gcd: gcd.cpp
	g++ $(OPTS) gcd.cpp

gcd2: gcd.cpp
	g++ $(OPTS2) -o gcd gcd.cpp

clean:
	rm -f a.out
	rm -f gcd
