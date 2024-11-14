//
// Created by Administrator on 24-11-13.
//

#include <iostream>

int main() {
    int n;
    int a, b;
    std::cin >> n >> a >> b;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x_start, x_end;
        int y_start, y_end;
        std::cin >> x_start >> y_start >> x_end >> y_end;
        const int x = std::min(a, x_end) - std::max(0, x_start);
        const int y = std::min(b, y_end) - std::max(0, y_start);
        if (x >= 0 && y >= 0) {
            sum += x * y;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
