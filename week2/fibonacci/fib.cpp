#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>


int calc_fib(int n) {
    if (n <= 1)
        return n;

    return calc_fib(n - 1) + calc_fib(n - 2);
}

int calc_fib_fast(std::vector<int>& fiblist) {
    int n = fiblist.size();

    fiblist[0] = 0;
    fiblist[1] = 1;
    for (int i = 2; i < n; i++) {
        fiblist[i] += fiblist[i-1] + fiblist[i-2];
    }
    
    return fiblist.back();
}

int main() {
    //clock_t begin, end;
    //double exec;

    // Stress Test
/*
    while(true) {
        int n = rand() % 46;
        int result1, result2;
        std::vector<int> fiblist(n+1); //Adding one element to account for fib(0)
        std::cout <<"Looking for the Fib: " << n << "\n";

        begin = clock();
        result1 = calc_fib(n);
        std::cout << result1 << '\n';
        end = clock();
        exec = (double)(end - begin)/CLOCKS_PER_SEC;
        std::cout << "The Original took " << exec << " to complete." << "\n" << "\n";

        begin = clock();
        result2 = calc_fib_fast(fiblist);
        std::cout << result2 << '\n';
        end = clock();
        exec = (double)(end - begin)/CLOCKS_PER_SEC;
        std::cout << "Took " << exec << " to complete.\n\n\n";

        if (result1 != result2 ) {
            std::cout << "HOLD UP, DIDN't Match\n";
            break;
        }
    }
*/
    int n = 0;
    std::cin >> n;
    std::vector<int> fiblist(n+1); //Adding one element to account for fib(0)

    // Original
    //begin = clock();
    //std::cout << calc_fib(n) << '\n';
    //end = clock();
    //exec = (double)(end - begin)/CLOCKS_PER_SEC;
    //std::cout << "The Original took " << exec << " to complete." << "\n" << "\n";
 
    // Fast 
    //begin = clock();
    std::cout << calc_fib_fast(fiblist) << '\n';
    //end = clock();
    //exec = (double)(end - begin)/CLOCKS_PER_SEC;
    //std::cout << "The fast way " << exec << " to complete." << "\n" << "\n";
    return 0;
}
