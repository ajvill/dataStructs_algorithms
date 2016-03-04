#include <iostream>
/*
1 <= a,b <=2*10^9

EuclideanGCD(a,b)
if b = 0:
  return a
a' <-- the remainder when a is
  divided by b
return EuclideanGCD(b,a')
*/

int euclidean_gcd(const int a, const int b) {
  int aval = a;
  int bval = b;
  int prime = 1;

  if (bval == 0)
    return a;

  for (int d = 2; prime > 0; d++) {
      prime = aval % bval;
      if ( prime > 0 ) {
        aval = bval;
        bval = prime;
      }
  }
  return bval;
}

int gcd(int a, int b) {
  //write your code here
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b ; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
  std::cout << "\n";
  std::cout << euclidean_gcd(a, b) << std::endl;
  return 0;
}
