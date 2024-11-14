//
// Created by Administrator on 24-11-14.
//

#include <cmath>
#include <iostream>
#include <cstdio>
#include <iomanip>

int n;
double rate;

int main() {
    std::cin >> n;
    scanf("%lf", &rate);
    double delta[n + 1];
    double value[n];
    double total_delta = 0;
    std::cin >> delta[0];
    for (int i = 1; i <= n; i++) {
        std::cin >> delta[i];
        value[i] = delta[0] * (1 / std::pow(1 + rate, i));
        total_delta += value[i];
    }
    std::cout << std::setprecision(3) << total_delta + delta[0] << std::endl;
}
