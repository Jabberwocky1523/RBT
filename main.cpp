#include <iostream>
#include <string>
#include "MYRBT.hpp"
int main(int, char **argv)
{
    Node<int> *test = new Node<int>(0, 1, nullptr, nullptr, nullptr);
    std::cout << test->getColor();
    std::cout << test->getKey();
}
