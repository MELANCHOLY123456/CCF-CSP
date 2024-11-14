//
// Created by Administrator on 24-11-12.
//

#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    int delta_x = 0, delta_y = 0;
    for (int i = 0; i < n; i++) {
        int op_x, op_y;
        std::cin >> op_x >> op_y;
        delta_x += op_x;
        delta_y += op_y;
    }
    for (int i = 0; i < m; i++) {
        int original_x, original_y;
        std::cin >> original_x >> original_y;
        std::cout << original_x + delta_x << " " << original_y + delta_y << std::endl;
    }
    return 0;
}
