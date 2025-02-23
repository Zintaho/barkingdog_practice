#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    std::vector<char> vec(1000001, 0);
    int N;
    std::cin >> N;
    std::vector<int> nums(N);
    for (int i = 0; i < N; ++i) {
        int k;
        std::cin >> k;
        nums[i] = k;
        vec[k] = 1;
    }
    int X;
    std::cin >> X;
    int count = 0;
    for (int k : nums) {
        // std::cout << k << ' ' << X - k << ' ' << (vec[X-k]?1:0) << '\n';

        if ((X - k) > 1000000 || (X-k) < 0) continue;
        if (vec[X - k] == 1) count++;
    }

    std::cout << count / 2;

    return 0;
}