#include <iostream>
#include "stringUtils.test.h"

int main() {
    std::cout << "***************** Testing trimSpaces tool *********" << std::endl;
    //testStripRight();
    testStripLeft();
    std::cout << "---------------------------------------------------------" << std::endl;
    testStripLeftManyBlankChars();
    return 0;
}