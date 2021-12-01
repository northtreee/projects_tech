#include <iostream>
#include <vector>
int func(int x, int y);

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<int> myvector;
    myvector.push_back(3);
    std::cout << myvector[0] << std::endl;
    std::cout << "hello wyx" << std::endl;
    std::cout << "get out" << std::endl;
    std::cout << "gtu";
    std::cout << "gru";
    std::cout << "hell" << std::endl;
    int c;
    c = 10;
    std::cout << c << std::endl;
    int res;
    res = func(c,c);
    std::cout << res;
    return 0;
}
int func(int x, int y){
    int c;
    c = x + y;
    return c;
}
