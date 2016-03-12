#include <iostream>

using std::cout;
using std::cin;

int get_change(int n) {
 
  int change = 0;
  int seg_len = 10;
  int i = 1;
  int lpoint = i;
  int rpoint = lpoint + (seg_len - 1);

  while ( i <= n ) {
    if (i >= rpoint) {
        // We found another segment so let's
        // add it to the change bucket
        change += 1;

        // move index up by seg_len
        lpoint += seg_len;
        rpoint += seg_len;
    }
    // check if new segment is past n
    if (n >= lpoint && n < rpoint){
        if ((n-lpoint)+1 > 5){
            change = change + (5 - (rpoint-n)) + 1;
        } else if ((n-lpoint)+1 == 5) {
            change += 1;
        } else {
            change = change + ((n-lpoint)+1);
        }
        break;
    }
    i += 1;
  }

  return change;
}

int main() {
  int n;
  cin >> n;
  cout << get_change(n) << '\n';
}
