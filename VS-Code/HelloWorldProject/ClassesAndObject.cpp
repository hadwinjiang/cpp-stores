#include "Person.h"
#include <iostream>

int main()
{
    Person p1("Henry", "Jiang", 123);
    Person p2("Someone", "Someone", 100);
    std::string name = p1.getName();

    return 0;
}