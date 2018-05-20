#include <iostream>
#include "single.h"

int main() {
    std::cout << Singleton<int>::instance() << std::endl;
    return 0;
}