#include "Matrix.hpp"

Matrix::Matrix(int nor, int noc) {
    this->numberOfRows = nor;
    this->numberOfColumns = noc;

    // initializes matrix to all zeros.
    for (int i = 0 ; i < nor*noc ; ++i) {
        this->matrix.insertAtTheEnd(0);
    }
}

Matrix::Matrix(int nor, int noc, std::string elements) {
    // elements = element_1|element_2|element_3|...|element_(nor*noc)
    // For example, if nor is 2 and noc is 3, the elements string 1|2|3|4|5|6 represents the following matrix with 2 rows and 3 columns:
    // 1 2 3
    // 4 5 6

    this->numberOfRows = nor;
    this->numberOfColumns = noc;

    std::string delimiter = "|";

    std::string element;
    size_t pos = 0;

    while (true) {
        pos = elements.find(delimiter);

        bool breakTheLoop = (pos == std::string::npos);

        element = elements.substr(0, pos);
        elements.erase(0, pos + delimiter.length());

        this->matrix.insertAtTheEnd(std::atoi(element.c_str()));

        if (breakTheLoop) break;
    }
}

int Matrix::getElementByIndex(int rowIndex, int columnIndex) const {
    /* TODO */
}

void Matrix::setElementByIndex(int rowIndex, int columnIndex, int element) {
    /* TODO */
}

Matrix Matrix::operator+(const Matrix &rhs) const {
    /* TODO */
}

Matrix Matrix::operator*(const int &rhs) const {
    /* TODO */
}

Matrix Matrix::kroneckerProduct(const Matrix &rhs) const {
    /* TODO */
}

void Matrix::print() {
    Node<int> *node = this->matrix.getFirstNode();

    for (int r = 0 ; r < this->numberOfRows ; ++r) {
        for (int c = 0 ; c < this->numberOfColumns ; ++c) {
            std::cout << *node << " ";

            node = node->next;
        }

        std::cout << std::endl;
    }
}
