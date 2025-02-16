#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    std::vector<int> vec(9);
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        int k;
        std::cin >> k;
        vec[i] = k;
        sum += k;
    }
    std::sort(vec.begin(), vec.end());
    for (int i = 0; i < 8; ++i) {
        for (int j = i+1; j < 9; ++j) {
            int a = vec[i];
            int b = vec[j];
            int temp = sum - a - b;
            if (temp == 100) {
                for (int k = 0; k < 9; ++k) {
                    if (k == i || k == j) continue;
                    std::cout << vec[k] << '\n';
                }
                return 0;
            }
        }
    }
    return 0;
}