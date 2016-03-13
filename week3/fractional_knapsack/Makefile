all: fractional fractional2

OPTS = -pipe -O2 -std=c++11 

OPTS2 = -g3 -Wall -Wextra 

fractional: fractional_knapsack.cpp
	g++ $(OPTS) fractional_knapsack.cpp

fractional2: fractional_knapsack.cpp
	g++ $(OPTS2) -o fractional_knapsack  fractional_knapsack.cpp

clean:
	rm -f a.out
	rm -f fractional_knapsack
