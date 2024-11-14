//
// Created by Administrator on 24-11-14.
//

#include <algorithm>
#include <iostream>

constexpr int N = 100010;
int n, m, k;
int t[N];
int c[N];

// 检查在给定的限制时间x内是否可以完成所有任务
bool check(const int x) {
    long long res = 0; // 累计缩短所有任务到x天所需消耗的总资源
    for (int i = 0; i < n; i++) {
        if (t[i] > x) {
            res += (t[i] - x) * c[i];
        }
    }
    return res <= m;
}

int main() {
    int max = 0; // 存储t[i]的最大值
    std::cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        std::cin >> t[i] >> c[i];
        max = std::max(max, t[i]);
    }
    int left = k, right = max;
    while (left < right) {
        const int mid = left + right >> 1;
        if (check(mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    std::cout << left << std::endl;
    return 0;
}

// #include <iostream>
//
// #define N 1000010
// #define ll long long
//
// // 模板函数 -> 用于快速从标准输入读取一个整数,它通过字符操作来读取数字,支持负数
// template <class T>
// void read(T& a) {
//     T x = 0, s = 1;
//     char c = getchar();
//     while (!isdigit(c)) {
//         if (c == '-') {
//             s = -1;
//         }
//         c = getchar();
//     }
//     while (isdigit(c)) {
//         x = x * 10 + (c ^ '0');
//         c = getchar();
//     }
//     a = x * s;
// }
//
// int n, m, k;
// int t[N], c[N];
//
// bool check(const int lim) {
//     int m1 = m;
//     for (int i = 1; i <= n; i++) {
//         if (k > lim) {
//             return false;
//         }
//         if (t[i] > lim) {
//             const int del = t[i] - lim;
//             m1 -= c[i] * del;
//         }
//     }
//     return m1 >= 0;
// }
//
// int main() {
//     // freopen("hh.txt", "r", stdin);
//     read(n), read(m), read(k);
//     for (int i = 1; i <= n; i++) {
//         read(t[i]), read(c[i]);
//     }
//     int l = 1, r = 1e9;
//     int ans = 0;
//     while (l <= r) {
//         const int mid = l + r >> 1;
//         if (check(mid)) {
//             ans = mid, r = mid - 1;
//         } else {
//             l = mid + 1;
//         }
//     }
//     std::cout << ans << std::endl;
//     return 0;
// }
