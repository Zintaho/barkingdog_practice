#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    /* code */
    const char* cat = R"(\    /\
 )  ( ')
(  /  )
 \(__)|)";
    std::cout << cat;
    return 0;
}