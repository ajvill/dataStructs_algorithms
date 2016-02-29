all: fib fib2

OPTS = -pipe -O2 -std=c++11 

OPTS2 = -g3 -Wall -Wextra 

fib: fib.cpp
	g++ $(OPTS) fib.cpp

fib2: fib.cpp
	g++ $(OPTS2) -o fib fib.cpp

clean:
	rm -f a.out
	rm -f fib
