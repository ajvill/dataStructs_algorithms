#include <iostream>
#include <vector>

long long get_fibonaccihuge(const long long n, const long long m) {
  int modval = m;
  int fibn = n;
  int period;  

  int temp;
  int fibi = 0;
  for (int i = 0; i <= fibn; i++) {
    temp = fibi % modval;
    std::cout << "temp = " << temp <<" when fibi = " << fibi <<" and mod is  "<< modval << "\n";
    fibi++;
  } 
 
  return 0;
}

int main() {
    long long n, m;

    //n = 281621358815590;
    //m = 30525;
    n = 10;
    m = 3;
    //std::cin >> n >> m;
    std::cout << get_fibonaccihuge(n, m) << '\n';
}
