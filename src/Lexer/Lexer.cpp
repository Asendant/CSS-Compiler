#include "Lexer.h"

#include <iostream>
#include <string>

#include "../FileScanner/FileScanner.h"

namespace Lexer {
    Lexer::Lexer() {
        const std::string pathName = "C:/Users/jacob/Desktop/test.ma";

        const std::string sourceCode = Scanner::FileScanner::ScanFile(pathName);
        std::cout << sourceCode << std::endl;
    }
}
