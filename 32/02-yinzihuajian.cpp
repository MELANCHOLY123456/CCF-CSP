//
// Created by Administrator on 24-11-12.
//

#include <iostream>
#include <cmath>

int prime[100000000] = {};

int main() {
    int q;
    std::cin >> q;
    for (int i = 0; i < q; i++) {
        for (int& j : prime) {
            j = 0;
        }
        long long n;
        int k;
        std::cin >> n >> k;
        int t = 2;
        while (n != 1) {
            if (n % t == 0) {
                prime[t]++;
                n /= t;
            } else {
                t++;
            }
        }
        long long result = 1;
        for (int m = 2; m < 100000000; m++) {
            if (prime[m] >= k) {
                result *= std::pow(m, prime[m]);
            }
        }
        std::cout << result << std::endl;
    }
    return 0;
}
