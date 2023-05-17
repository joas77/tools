#ifndef STRINGUTILS_TEST_H
#define STRINGUTILS_TEST_H

#include <iostream>
#include "../src/stringUtils.h"

void testStripRight();
void testStripLeft();
void testStripLeftManyBlankChars();

/*** HELPER FUNCTIONS ***/
void printStringInfo(const std::string& str, const std::string& type);

#endif