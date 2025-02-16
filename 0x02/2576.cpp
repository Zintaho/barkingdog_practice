#include <iostream>
#include <climits>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int sum = 0;
    int min = INT_MAX;
    int k;
    for (int i = 0; i < 7; ++i) {
        std::cin >> k;
        if (k % 2 == 0) continue;;
        sum += k;
        if (k < min) min = k;
    }
    if (sum == 0) std::cout<< -1;
    else {
        std::cout << sum << '\n';
        std::cout << min << '\n';
    }
    return 0;
}