//
// Created by Administrator on 24-11-11.
//
#include <iostream>

constexpr int N = 110;

int main() {
    int n, m, length, word;
    int a[N] = {};
    int b[N] = {};

    std::cin >> n >> m;

    for (int i = 0; i < n; i++) {
        std::cin >> length;
        int flag[N] = {};

        for (int j = 0; j < length; j++) {
            std::cin >> word;
            a[word]++;
            flag[word]++;
        }

        for (int j = 1; j <= m; j++) {
            if (flag[j] > 0) {
                b[j]++;
            }
        }
    }

    for (int i = 1; i <= m; i++) {
        std::cout << b[i] << " " << a[i] << std::endl;
    }

    return 0;
}
