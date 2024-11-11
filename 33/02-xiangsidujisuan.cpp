#include <iostream>
#include <unordered_set>

int main() {
    int n, m;
    int allCnt = 0; // 存储两篇文章中所有不重复单词的总数
    int commonCnt = 0; // 存储两篇文章中共有的不重复单词数的数量
    std::cin >> n >> m;

    // 记录第一篇文章中的不重复元素
    std::unordered_set<std::string> unordered_set_01;
    for (int i = 0; i < n; i++) {
        // 处理字符串--小写化
        std::string str;
        std::cin >> str;
        for (char &ch: str) {
            ch = tolower(static_cast<unsigned char>(ch));
        }
        // 如果出现不重复元素，总个数+1
        if (!unordered_set_01.count(str)) {
            unordered_set_01.emplace(str);
            allCnt++;
        }
    }

    // 记录第二篇文章中的不重复元素
    std::unordered_set<std::string> unordered_set_02;
    for (int i = 0; i < m; i++) {
        // 处理字符串--小写化
        std::string str;
        std::cin >> str;
        for (char &ch: str) {
            ch = tolower(static_cast<unsigned char>(ch));
        }

        // 计算两篇文章重复元素个数，但是同一元素不可多次重复！！！
        if (unordered_set_01.count(str) && !unordered_set_02.count(str)) {
            commonCnt++;
        }
        unordered_set_02.emplace(str); // 记录元素，set并不记录重复元素
    }
    // 总个数 += 第二篇文章不重复元素个数 - 与第一篇文章重复元素个数（即第二篇文章独有的元素（且非重复））
    allCnt += unordered_set_02.size() - commonCnt;
    std::cout << commonCnt << std::endl << allCnt;
}
