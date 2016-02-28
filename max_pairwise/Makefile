all: max_pairwise_product  cpp_stress_test  cpp_stress_test2

OPTS = -pipe -O2 -std=c++11 

OPTS2 = -g3 -Wall -Wextra 

max_pairwise_product: max_pairwise_product.cpp
	g++ $(OPTS) max_pairwise_product.cpp

cpp_stress_test: cpp_stress_test.cpp
	g++ $(OPTS) cpp_stress_test.cpp

cpp_stress_test2: cpp_stress_test.cpp
	g++ $(OPTS2) -o cpp_stress_test cpp_stress_test.cpp

clean:
	rm -f a.out
	rm -f cpp_stress_test
