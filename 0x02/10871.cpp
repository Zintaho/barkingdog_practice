#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int n, x;
    std::cin >> n >> x;

    int t;
    while(n--) {
        std::cin >> t;
        if (t < x) std::cout << t <<' ';
    }
    return 0;
}