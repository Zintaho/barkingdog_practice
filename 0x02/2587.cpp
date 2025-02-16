#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    std::vector<int> vec(5);
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        int k;
        std::cin >> k;
        vec[i] = k;
        sum += k;
    }
    std::sort(vec.begin(), vec.end());
    std::cout << sum / 5 << '\n';
    std::cout << vec[2];
    return 0;
}