#include <iostream>
#include <vector>
#include <cmath>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int N, K;
    std::cin >> N >> K;
    std::vector<int> vec(12, 0);
    for (int i = 0; i < N ; ++i) {
        int s, y;
        std::cin >> s >> y;
        vec[s*6 + y - 1]++;
    }
    int sum = 0;
    for (int k : vec) {
        sum += std::ceil((double)k / K);
    }
    std::cout <<  sum;
    return 0;
}