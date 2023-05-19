#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include <string>

void stripLeft(std::string& str, const std::string& nonDesiredChars=" ");
void stripRight(std::string& str, const std::string& nonDesiredChars=" ");

#endif