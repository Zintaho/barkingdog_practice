#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int year;
    std::cin >> year;
    std::cout << ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)? 1: 0;
    return 0;
}