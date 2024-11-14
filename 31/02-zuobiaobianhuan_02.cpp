//
// Created by Administrator on 24-11-12.
//

#include<iostream>
#include<cmath>
using namespace std;

//创建结构体point储存执行每步后所在的地点信息
struct point {
    //用极坐标表示
    double len;
    double anl;
};

int main() {
    int n, m;
    cin >> n >> m;
    //P数组相当于前缀和的sum数组
    point P[n + 5];
    //初始化，伸缩1.0，转动0.0
    P[0] = {1.0, 0.0};
    for (int i = 1; i <= n; i++) {
        int op_num; //操作类型 1代表伸缩 2代表转角
        double op_value; //操作数据量
        cin >> op_num >> op_value;
        //伸缩
        if (op_num == 1) {
            //角度不变继承上一步
            P[i].anl = P[i - 1].anl;
            P[i].len = op_value * P[i - 1].len;
        } else if (op_num == 2) {
            P[i].len = P[i - 1].len;
            P[i].anl = P[i - 1].anl + op_value;
        }
    }
    //开始输入样例
    for (int i = 0; i < m; i++) {
        int di, dj; //第i步到第j步操作
        double original_x, original_y; //最初点
        cin >> di >> dj >> original_x >> original_y;
        const double delta_x = P[dj].len / P[di - 1].len; //表示第j步相对第i-1步伸缩的长度
        const double delta_anl = P[dj].anl - P[di - 1].anl; //表示第j步相对第i-1步转动的角度
        //开始代入公式
        original_x *= delta_x;
        original_y *= delta_x;
        const double ans_x = original_x * cos(delta_anl) - original_y * sin(delta_anl);
        const double ans_y = original_x * sin(delta_anl) + original_y * cos(delta_anl);
        printf("%f %f\n", ans_x, ans_y);
    }
    return 0;
}
