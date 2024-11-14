//
// Created by Administrator on 24-11-13.
//

#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;
    char pieces[64];
    std::map<std::string, int> status_map;
    for (int i = 0; i < n; i++) {
        for (char& piece : pieces) {
            std::cin >> piece;
        }
        if (status_map.count(pieces)) {
            status_map[pieces]++;
        } else {
            status_map[pieces] = 1;
        }
        std::cout << status_map[pieces] << std::endl;
    }
    return 0;
}

// int main(int argc, char* argv[]) {
//     int n;
//     std::cin >> n;
//     int matrix[8 * n][8];
//     for (int i = 0; i < 8 * n; i++) {
//         for (int j = 0; j < 8; j++) {
//             std::cin >> matrix[i][j];
//         }
//     }
//     for (int i = 8; i < 8 * n; i++) {
//         int ans = 1;
//         bool flag = true;
//         for (int j = 0; j < 8; j++) {
//             if (matrix[i][j] != matrix[i - 8][j]) {
//                 flag = false;
//             }
//         }
//         if (flag) {
//             ans++;
//         }
//         std::cout << ans << std::endl;
//     }
//     return 0;
// }