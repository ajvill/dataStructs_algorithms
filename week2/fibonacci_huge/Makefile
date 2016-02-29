all: fibonacci_huge fibonacci_huge2

OPTS = -pipe -O2 -std=c++11 

OPTS2 = -g3 -Wall -Wextra 

fibonacci_huge: fibonacci_huge.cpp
	g++ $(OPTS) fibonacci_huge.cpp

fibonacci_huge2: fibonacci_huge.cpp
	g++ $(OPTS2) -o fibonacci_huge fibonacci_huge.cpp

clean:
	rm -f a.out
	rm -f fibonacci_huge
