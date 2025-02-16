#include <iostream>
#include <algorithm>
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int A, B, C;
    std::cin >> A>> B >> C;
    int max = std::max({A, B, C});
    if (A == B && B == C) std::cout << 10000 + A * 1000;
    else if (A == B || A == C) std::cout << 1000 + A * 100;
    else if (B == C) std:: cout << 1000 + B * 100;
    else std:: cout << max * 100;

    return 0;
}