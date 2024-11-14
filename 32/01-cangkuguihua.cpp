//
// Created by Administrator on 24-11-12.
//

#include <algorithm>
#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> arr[i][j];
        }
    }

    // 寻找上级仓库
    for (int i = 0; i < n; i++) {
        int max = 1010; // 用于存储找到的上级仓库的最小编号
        for (int j = 0; j < n; j++) {
            bool flag = true;
            for (int k = 0; k < m; k++) {
                if (arr[j][k] <= arr[i][k]) {
                    flag = false;
                }
            }
            if (flag) {
                max = std::min(max, j + 1);
            }
        }
        if (max == 1010) {
            std::cout << "0" << std::endl;
        } else {
            std::cout << max << std::endl;
        }
    }
    return 0;
}
