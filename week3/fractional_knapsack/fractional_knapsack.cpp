#include <iostream>
#include <algorithm>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  int n = values.size();
  int knapsack_weight = capacity;
  vector<double> maxrank(n);
 
  // Convert individual values and weights to value per weight. 
  for (int j = 0; j < n; j++){
    maxrank[j] = (double)values[j]/weights[j];  
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
  for (auto v : sorted_index){
    if (knapsack_weight == 0){
       return (double)value; 
    } else {
        if ( weights[v] < capacity ) {
            value += (double)values[v];
            knapsack_weight -= weights[v];
        } else {
            value += ( ((double)capacity/weights[v]) * values[v] );
            knapsack_weight -= ( ((double)capacity/weights[v]) * weights[v] );
        }
    }  
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
