//
// Created by Administrator on 24-11-11.
//

#include <iostream>

int main() {
    int n, m, t;
    std::cin >> n >> m >> t;
    int b[10010]; // 原始矩阵
    int c[10010]; // 操作2中存储转置后的矩阵
    for (int i = 0; i < n * m; i++) {
        std::cin >> b[i];
        c[i] = b[i];
    }
    int row = n; // 行
    int col = m; // 列

    for (int i = 0; i < t; i++) {
        int op;
        int x, y;
        std::cin >> op >> x >> y;
        if (op == 1) {
            row = x;
            col = y;
        } else if (op == 2) {
            for (int j = 0; j < row; j++) {
                for (int k = 0; k < col; k++) {
                    c[k * row + j] = b[j * col + k];
                }
            }
            for (int j = 0; j < n * m; j++) {
                b[j] = c[j];
            }
            const int temp = row;
            row = col;
            col = temp;
        } else if (op == 3) {
            std::cout << b[x * col + y] << std::endl;
        }
    }
}
