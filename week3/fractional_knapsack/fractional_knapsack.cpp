#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  int n = values.size();
  int knapsack_weight = capacity;
  vector<double> maxrank(n);
  vector<double> A(n);
 
  // Convert individual values and weights to value per weight. 
  for (int j = 0; j < n; j++){
    maxrank[j] = (double)values[j]/weights[j];
    A[j] = 0;
  }

  // Going to sort max per unit list but want to also keep track of their index
  vector<int> sorted_index(maxrank.size());
  std::size_t ind(0);
  std::generate(std::begin(sorted_index), std::end(sorted_index), [&]{ return ind++; });

  // Sort the array indices
  std::sort( std::begin(sorted_index), 
             std::end(sorted_index),
             [&] (int i1, int i2) { return maxrank[i1] > maxrank[i2]; } );

  // fill the knapsack here
  double value = 0.0;
  double a = 0;
  for (auto v : sorted_index){
    if (knapsack_weight == 0){
       return (double)value; 
    }
    a = std::min(weights[v] , knapsack_weight);
    value += (double)a*((double)values[v]/weights[v]);
    weights[v] -= a;
    A[v] += a;
    knapsack_weight -= a;
  }  
  
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);

  for (int i = 0; i < n; i++) {
    
    std::cin >> values[i] >> weights[i];
  }
  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
