#include <iostream>
#include "includes/hyprparse/hyprparse.h"

int main() {
    std::cout << hyprparse::helper::getUser() << std::endl;
    return 0;
}