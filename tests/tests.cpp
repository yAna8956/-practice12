#include <cassert>
#include <iostream>
#include <stdexcept>
#include <cmath>
#include "../src/m_utils.h"

void test_addition() {
    assert(add(2, 3) == 5);
    assert(add(-5, 5) == 0);
    assert(add(-2, -3) == -5);
}

void test_subtraction() {
    assert(subtract(10, 4) == 6);
    assert(subtract(4, 10) == -6);
}

void test_division() {
    assert(std::abs(divide(15, 2) - 7.5) < 1e-9);

    bool exception_thrown = false;
    try {
        divide(10, 0);
    } catch (const std::invalid_argument&) {
        exception_thrown = true;
    }
    assert(exception_thrown && "Expected std::invalid_argument on division by zero");
}

int main() {
    test_addition();
    test_subtraction();
    test_division();

    std::cout << "All unit tests passed successfully!\n";
    return 0;
}
