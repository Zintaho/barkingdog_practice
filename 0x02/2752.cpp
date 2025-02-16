#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int A;
    int sum = 0;
    int max = 0;
    int min = 2147483647;
    for (int i = 0; i < 3; ++i) {
        std::cin >> A;
        sum += A;
        if (A > max) max = A;
        if (A < min) min = A;
    }
    std::cout << min << ' ' << sum - max - min << ' ' << max;
    
    return 0;
}