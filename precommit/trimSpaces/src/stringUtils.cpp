#include <algorithm>
#include "stringUtils.h"

void stripLeft(std::string& str) {

    auto firstNonSpace = std::find_if(
        str.begin(), str.end(),
        [](char c){
            return c != ' ';
        }
    );
    str.erase(str.begin(), firstNonSpace);
}

void stripRight(std::string& str){
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
}