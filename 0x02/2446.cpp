#include <iostream>
#include <sstream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int N;
    std::cin >> N;
    std::ostringstream oss;
    for (int i = 0; i < N; ++i) {
        oss << std::string(i, ' ') << std::string(2*(N - i) - 1,'*')<< '\n';
    }
    for (int i = N - 2; i >= 0; --i) {
        oss << std::string(i, ' ') << std::string(2*(N - i) - 1,'*')<< '\n';
    }
    std::cout << oss.str();
    return 0;
}