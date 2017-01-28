#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) {
    if (a[left] == a[right]) return 1;
    else return 0;
  } 
  //write your code here
  int result  = 0;
  if (left < right ) {
    int mid = int(left + (right - left)/2);
    //std::cout << "mid = " << mid << std::endl;
    if ( a[mid-1] == a[mid] ||
         a[mid] == a[mid+1] ) {
      //std::cout << "a[mid-1] = "<<a[mid-1]<<", a[mid] = "<<a[mid]<<std::endl;
      //std::cout << "a[mid] = "<<a[mid]<<", a[mid+1] = "<<a[mid+1]<<std::endl;
      result = 1;
      return result;
    } else {
      get_majority_element(a, mid, right);
    }
  }
//  return result;;
}

int main() {
  int left, right;
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  left = 0;
  right = a.size() - 1;
  std::sort(a.begin(), a.end());
  std::cout << (get_majority_element(a, left, right)) << '\n';
}
