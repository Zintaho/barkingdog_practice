#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    int N;
    std::cin >> N;

    std::vector<int> vec(N);
    for (int i = 0; i < N; ++i) {
        int k;
        std::cin >> k;
        vec[i] = k;
    }
    
    int v;
    std::cin >> v;
    int count = 0;
    for (int k : vec) {
        if (k == v) count++;
    }

    std::cout << count; 
    return 0;
}