#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    long long A, B;
    std::cin >> A >> B;
    long long start = (A > B)? B : A;
    long long end = (A > B)? A : B;
    if (start != end) {
        std::cout << end - start - 1 << '\n';
        if (end - start != 1) {
            for (long long i = start + 1; i < end; ++i) {
                std::cout << i << ' ';
            }
        }
    } else {
        std::cout << 0;
    }
    return 0; 
}