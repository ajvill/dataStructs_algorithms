#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>
#include <cstdlib>

using std::vector;

int binary_search(const vector<int> &a, int low, int high, int key) 
{
  if ( high < low ) {
    return  -1;
  }

  int mid = std::floor( low + (high - low)/2);

  if (key == a[mid]) {
    return mid;
  } 
  else if (key < a[mid]) {
    return binary_search(a, low, mid - 1, key);
  }
  else {
    return binary_search(a, mid + 1, high, key);
  }
} // end of binary_search

int linear_search(const vector<int> &a, int x) 
{
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
} // end of linear search

int main()
{
  //int n;
  //int m;
  //vector<int> a(n);
  //vector<int> b(m); //REMOVE after stress test
/*
  int idx = 0;
  while (true) {
    std::srand(time(0 * idx));
    int n = std::rand() % 100000 + 1;  //1 <= n,k <= 10^5
    //int n = std::rand() % 100 + 1;  //1 <= n,k <= 10^5
    int key = std::rand() % 100000 + 1;  //1 <= n,k <= 10^5
    //int key = std::rand() % 10 + 1;  //1 <= n,k <= 10^5

    std::cout << "n = " << n << "\n";
    std::cout << "key = " << key << "\n";
    vector<int> a(n);

    for (size_t i = 0; i < a.size(); i++) {
      a[i] = i + 1;
    }
    int low = 0;
    int high = a.size() - 1;
    int res1;
    int res2;
    res1 = linear_search(a, key);
    res2 = binary_search(a, low, high,  key);
    std::cout << "\n";
    
    if (res1 != res2) {
      std::cout << "Wrong answer: " << res1 << ' ' << res2 << "\n";
      std::cout << "a.front() = " << a.front() << "\n";
      std::cout << "a.back() = " << a.back() << "\n";
      break;
    }
    else {
      std::cout << "OK" << "\n\n";
    }
    idx++;
  }
*/
// THE ORIGINAL HERE

  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int low = 0;
  int high = a.size() - 1;
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    //std::cout << linear_search(a, b[i]) << " ";
    std::cout << binary_search(a, low, high, b[i]) << " ";
  }
    std::cout << "\n";

}
