#include <iostream>
#include <vector>

int main() {
    int n, m, p, q;
    std::cin >> n >> m >> p >> q;
    std::vector Matrix(n, std::vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> Matrix[i][j];
        }
    }
    std::vector<int> temp(n * m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp[i * m + j] = Matrix[i][j];
        }
    }
    std::vector result(p, std::vector<int>(q));
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = temp[i * q + j];
        }
    }
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
