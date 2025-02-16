#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int N;
    std::cin >> N;
    int YS = 0, MS = 0;
    for (int i = 0; i < N; ++i) {
        int k;
        std::cin >> k;
        YS += 10 * (k / 30 + 1);
        MS += 15 * (k / 60 + 1);
    }
    if (YS > MS) std::cout << 'M' << ' ' << MS;
    else if (YS < MS) std::cout << 'Y' << ' ' << YS;
    else if (YS == MS) std::cout << "Y M" << ' ' << MS;
    return 0;
}