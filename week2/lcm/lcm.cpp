#include <iostream>

/* NOTE:
    lcm(a,b) = (a * b)/gcd(a,b)
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

long long lcm(const int a, const int b) {
  long  aval = a;
  long  bval = b;

  return (long long)(aval * bval)/euclidean_gcd(aval, bval);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
