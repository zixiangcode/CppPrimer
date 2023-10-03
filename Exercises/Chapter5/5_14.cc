#include <iostream>
#include <string>
#include <map>

int main() {
    std::string curStr;
    std::map<std::string, int> wordCount;  // 使用 map 存储单词和它们的出现次数

    while (std::cin >> curStr) {
        wordCount[curStr]++;  // 增加单词的计数
    }

    std::string mostCommonWord;
    int maxCount = 0;

    // 遍历 map，找到出现次数最多的单词
    for (const auto& pair : wordCount) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostCommonWord = pair.first;
        }
    }

    std::cout << "出现最多的单词是：" << mostCommonWord << std::endl;
    std::cout << "出现次数：" << maxCount << std::endl;

    return 0;
}
