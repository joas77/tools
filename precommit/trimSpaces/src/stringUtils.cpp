#include <algorithm>
#include "stringUtils.h"

void stripRight(std::string& str){
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
}