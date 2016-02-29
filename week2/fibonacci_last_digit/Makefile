all: fibonacci_last_digit fibonacci_last_digit2

OPTS = -pipe -O2 -std=c++11 

OPTS2 = -g3 -Wall -Wextra 

fibonacci_last_digit: fibonacci_last_digit.cpp
	g++ $(OPTS) fibonacci_last_digit.cpp

fibonacci_last_digit2: fibonacci_last_digit.cpp
	g++ $(OPTS2) -o fibonacci_last_digit fibonacci_last_digit.cpp

clean:
	rm -f a.out
	rm -f fibonacci_last_digit
