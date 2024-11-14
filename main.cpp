#include <iostream>

int main() {
    std::cout << "Hello World!\n";
    return 0;
}

// struct op {
//     int op_num;
//     double op_text;
// };
//
// int main(int argc, char* argv[]) {
//     int n, m;
//     std::cin >> n >> m;
//     op op_array[n];
//     for (int i = 0; i < n; i++) {
//         std::cin >> op_array[i].op_num >> op_array->op_text;
//     }
//     for (int index = 0; index < m; index++) {
//         int op_start, op_end;
//         double x, y;
//         std::cin >> op_start >> op_end >> x >> y;
//         for (int i = op_start; i <= op_end; i++) {
//             if (op_array[i].op_num == 1) {
//                 x = op_array[i].op_text * x;
//                 y = op_array[i].op_text * y;
//             }
//             if (op_array[i].op_num == 2) {
//                 const double temp_x = x;
//                 x = x * std::cos(op_array[i].op_text) - y * std::sin(op_array[i].op_text);
//                 y = temp_x * std::sin(op_array[i].op_text) + y * std::cos(op_array[i].op_text);
//             }
//         }
//         std::cout << x << " " << y << std::endl;
//     }
//     return 0;
// }