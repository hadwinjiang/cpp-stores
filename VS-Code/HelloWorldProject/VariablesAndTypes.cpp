#include <iostream>

int main() {
    int i1 = 1;
    std::cout << "i1= " << i1 << '\n';
    int i2;
    i2 = 2;
    std::cout << "i2= " << i2 << '\n';
    int i3(3);
    std::cout << "i3= " << i3 << '\n';
    // int i4{ 4 };
    // std::cout << "i4= " << i4 << '\n';

    auto div = static_cast<double>(i1) / i2;
    std::cout << "in integer arithmetic, " << i1 
    << " divided by " << i2 << " is " << div << '\n';

    auto a1 = 1;


    return 0;
}