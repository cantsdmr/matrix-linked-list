#include <iostream>

#include "Matrix.hpp"

int main() {
    Matrix m1(2, 3);

    m1.print();

    Matrix m2(2, 3, "1|2|3|4|5|6");

    m2.print();

    return 0;
}
