#include <iostream>
#include <vector>
#include <sstream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    std::vector<char> vec({'D', 'C', 'B', 'A', 'E'});

    for (int j = 0; j < 3; ++j) {
        int sum = 0;
        std::string line;
        getline(std::cin, line);

        std::istringstream iss(line);
        
        int a;
        while (iss >> a) {
            sum += a;
        }
        std::cout << vec[sum] << '\n';
    }
    return 0;
}