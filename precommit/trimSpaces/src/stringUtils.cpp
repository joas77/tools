#include <algorithm>
#include "stringUtils.h"

void stripLeft(std::string& str, const std::string& nonDesiredChars) {

    auto firstNonSpace = std::find_if(
        str.begin(), str.end(),
        [&nonDesiredChars](char c){
            return nonDesiredChars.find(c) == std::string::npos;
        }
    );
    str.erase(str.begin(), firstNonSpace);
}

void stripRight(std::string& str){
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
}