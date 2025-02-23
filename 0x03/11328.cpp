#include <iostream>
#include <string>
#include <vector>
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
        std::string a, b;
        std::cin >> a >> b;
        std::vector<int> aVec(26, 0);
        std::vector<int> bVec(26, 0);
        for (const char c : a) {
            aVec[c - 'a']++;
        }
        for (const char c : b) {
            bVec[c - 'a']++;
        }
        bool isTrue = true;
        for (int j = 0; j < 26; ++j) {
            if (aVec[j] != bVec[j]) {
                isTrue = false;
                break;
            }
        }

        oss << (isTrue?"P" : "Imp") << "ossible"<< '\n';
    }
    std::cout << oss.str();
    return 0;
}