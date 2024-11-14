//
// Created by Administrator on 24-11-13.
//

#include <iostream>
#include <string>

constexpr int N = 10010, D = 30;
long long tmp[D][D], ans[N][N];
int n, d;
int Q[N][D], K[N][D], V[N][D], W[N];

int main() {
    std::cin >> n >> d;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            std::cin >> Q[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            std::cin >> K[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            std::cin >> V[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        std::cin >> W[i];
    }

    int K_T[d][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            K_T[j][i] = K[i][j];
        }
    }

    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            tmp[i][j] = 0;
            for (int k = 0; k < n; k++) {
                tmp[i][j] += K_T[i][k] * V[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            for (int k = 0; k < d; k++) {
                ans[i][j] += Q[i][k] * tmp[k][j];
            }
            ans[i][j] *= static_cast<long long>(W[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            std::cout << ans[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
