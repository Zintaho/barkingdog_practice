#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    std::string s;
    std::cin >> s;
    std::vector<int> vec(26, 0);
    for (const char c : s) {
        vec[c - 'a']++;
    }
    for (const int i : vec) {
        std::cout << i << ' ';
    }
    return 0;
}