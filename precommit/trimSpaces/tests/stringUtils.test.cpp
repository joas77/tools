#include <iostream>
#include <string>
#include <cassert>
#include "stringUtils.test.h"

void testStripLeft() {
    auto msgInput = std::string{"     Text with lot of spaces at the begining"};
    auto msgExpected = std::string{"Text with lot of spaces at the begining"};

    std::cout << "input string = " << msgInput << " --- size = " << msgInput.size() <<  std::endl;
    stripLeft(msgInput);
    std::cout << "expected  string = " << msgExpected <<  " --- size = " << msgExpected.size() << std::endl; 
    std::cout << "output  string = " << msgInput <<  " --- size = " << msgInput.size() << std::endl;
    assert(msgInput == msgExpected);
}

void testStripRight() {
    auto msgInput = std::string{"Text with lot of spaces at the end      "};
    auto msgExpected = std::string{"Text with lot of spaces at the end"};
    std::cout << "input string = " << msgInput << " --- size = " << msgInput.size() <<  std::endl;
    stripRight(msgInput);
    std::cout << "expected  string = " << msgExpected <<  " --- size = " << msgExpected.size() << std::endl; 
    std::cout << "output  string = " << msgInput <<  " --- size = " << msgInput.size() << std::endl;
    assert(msgInput == msgExpected);
}
