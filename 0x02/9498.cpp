#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int A;
    std::cin >> A;
    if (90 <= A && A <= 100) std::cout << "A";
    else if (80 <= A && A <= 89) std::cout << "B";
    else if (70 <= A && A <= 79) std::cout << "C";
    else if (60 <= A && A <= 69) std::cout << "D";
    else std::cout << "F";
    return 0;
}