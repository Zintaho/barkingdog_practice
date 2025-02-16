#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    std::vector<int> vec(20);
    std::iota(vec.begin(), vec.end(), 1);
    for (int i = 0; i < 10; ++i) {
        int A, B;
        std::cin >> A >> B;
        std::reverse(vec.begin() + A- 1, vec.begin() + B);
    }
    for (auto& k : vec) {
        std::cout << k << ' ';
    }
    return 0;
}