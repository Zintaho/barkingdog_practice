#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int max = 0;
    int k = 0;
    for (int i = 0; i < 9; ++i) {
        int a;
        std::cin >> a;
        if (max < a) {
            max = a;
            k = (i+1);
        }
    }
    std::cout << max << '\n' << k;
    return 0;
}