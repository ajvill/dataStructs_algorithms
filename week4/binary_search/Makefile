all: binary_search binary_search2

OPTS = -pipe -O2 -std=c++11 

OPTS2 = -g3 -Wall -Wextra 

binary_search: binary_search.cpp
	g++ $(OPTS) binary_search.cpp

binary_search2: binary_search.cpp
	g++ $(OPTS2) -o binary_search  binary_search.cpp

clean:
	rm -f a.out
	rm -f binary_search
