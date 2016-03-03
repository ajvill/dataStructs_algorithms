#include <iostream>
#include <vector>
/*
Given an integer n, find the last digit of the nth fibonacci number fn.
f[0] = 0
f[1] = 1
for i=2 to n:
    f[i] = f[i-1] + f[i-2];
printf( f[n] mod 10 )

Sample 1
input:  3
output: 2

Sample 2
input:  327305
output: 5
*/

int get_fibonacci_last_digit(int n) {
  std::vector<int> fiblist;
  fiblist.push_back(0);
  fiblist.push_back(1);  
 
  for ( int i=2; i <= n; i++ ) {
    fiblist.push_back( (fiblist[i-1] + fiblist[i-2]) % 10 );
  }
  return fiblist.back();
}

int main() {
  int n;
  std::cin >> n;
  int c = get_fibonacci_last_digit(n);
  std::cout << c << '\n';
}
