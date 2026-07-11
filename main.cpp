#include <iostream>
#include <string>

#include <Windows.h>

#include "leaver.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    my_namespace::Leaver l;
    std::string name{ "" };
    std::cout << "¬ведите им€: ";
    std::cin >> name;
    std::cout << l.leave(name);
    return 0;
}
