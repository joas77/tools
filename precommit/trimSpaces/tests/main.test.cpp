#include <iostream>
#include "stringUtils.test.h"

int main() {
    std::cout << "***************** Testing trimSpaces tool *********" << std::endl;
    testStripLeft();
    std::cout << "---------------------------------------------------------" << std::endl;
    testStripLeftManyBlankChars();
    std::cout << "---------------------------------------------------------" << std::endl;
    testStripRight();
    std::cout << "---------------------------------------------------------" << std::endl;

    return 0;
}