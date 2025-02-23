#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    std::string a, b;
    std::cin >> a >> b;
    std::vector<int> aVec(26, 0);
    std::vector<int> bVec(26, 0);
    for (const char c : a) {
        aVec[c - 'a']++;
    }
    for (const char c : b) {
        bVec[c - 'a']++;
    }

    int sum = 0;
    for (int j = 0; j < 26; ++j) {
        sum += std::abs(aVec[j] - bVec[j]);
    }
    std::cout << sum;
    return 0;
}