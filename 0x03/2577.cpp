#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int a, b, c;
    std::cin >> a >> b >> c;
    int sum = a * b * c;
    std::string s = std::to_string(sum);
    std::vector<int> vec(10, 0);

    for (const char c : s) {
        vec[c - '0']++;
    }
    for (const int i : vec) {
        std::cout << i << '\n';
    }
    return 0;
}