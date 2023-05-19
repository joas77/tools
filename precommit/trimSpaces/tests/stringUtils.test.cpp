#include <iostream>
#include <string>
#include <cassert>
#include "stringUtils.test.h"

void testStripLeft() {
    auto msgInput = std::string{"     Text with lot of spaces at the begining"};
    auto msgExpected = std::string{"Text with lot of spaces at the begining"};

    printStringInfo(msgInput, "INPUT");
    stripLeft(msgInput);
    printStringInfo(msgExpected, "EXPECTED");
    printStringInfo(msgInput, "OUTPUT");
    assert(msgInput == msgExpected);
}

void testStripLeftManyBlankChars() {
    auto msgInput = std::string{"  \t  \nText with many diferent blank characteres (tab, spaces, newlines etc ) at the begining"};
    auto msgExpected = std::string{"Text with many diferent blank characteres (tab, spaces, newlines etc ) at the begining"};

    printStringInfo(msgInput, "INPUT");
    stripLeft(msgInput, " \t\n");
    printStringInfo(msgExpected, "EXPECTED");
    printStringInfo(msgInput, "OUTPUT");
    assert(msgInput == msgExpected);
}

void testStripRight() {
    auto msgInput = std::string{"Text with lot of spaces at the end      "};
    auto msgExpected = std::string{"Text with lot of spaces at the end"};
    printStringInfo(msgInput, "INPUT");
    stripRight(msgInput);
    printStringInfo(msgExpected, "EXPECTED");
    printStringInfo(msgInput, "OUTPUT");
    assert(msgInput == msgExpected);
}

void printStringInfo(const std::string& str, const std::string& type) {
    std::cout << type << " string = \"" << str << "\" --- size  = " << str.size() << std::endl;
}
