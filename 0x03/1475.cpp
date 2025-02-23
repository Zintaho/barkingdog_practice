#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    std::string s;
    std::cin >> s;
    std::vector vec(9, 0);
    int count = 0;
    for (char c : s) {
        int k = c - '0';
        if (k == 9) k = 6;
        if (vec[k] == 0) {
            count++;
            for (int i = 0; i < 9; ++i) vec[i]++;
            vec[6]++;
        }
        vec[k]--;
    }
    std::cout << count;
    return 0;
}