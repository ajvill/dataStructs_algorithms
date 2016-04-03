all: majority_element majority_element2

OPTS = -pipe -O2 -std=c++11 

OPTS2 = -g3 -Wall -Wextra 

majority_element: majority_element.cpp
	g++ $(OPTS) majority_element.cpp

majority_element2: majority_element.cpp
	g++ $(OPTS2) -o majority_element  majority_element.cpp

clean:
	rm -f a.out
	rm -f majority_element
