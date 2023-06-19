#include <iostream>
#include <functional>
#include <vector>
#include "stringUtils.test.h"

void printSeparator()
{
    std::cout << "---------------------------------------------------------" << std::endl;
}

int main() {
    std::cout << "***************** Testing trimSpaces tool *********" << std::endl;

    std::vector<std::function<void()>> testFunctions;

    testFunctions.push_back(testStripLeft);
    testFunctions.push_back(testStripLeftManyBlankChars);
    testFunctions.push_back(testStripRight);

    for(const auto& test : testFunctions){
        test();
        printSeparator();
    }

    return 0;
}