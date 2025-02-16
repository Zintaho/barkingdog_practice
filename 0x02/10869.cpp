#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int A, B;
    std::cin >> A >> B;
    std::cout << A+B << '\n';
    std::cout << A-B << '\n';
    std::cout << A*B << '\n';
    std::cout << A/B << '\n';
    std::cout << A%B << '\n';
    return 0;
}