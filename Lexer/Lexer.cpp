#include "Lexer.h"
#include <iostream>
#include <fstream>

namespace Lexer {
    Lexer::Lexer() {
        const std::string pathName = "C:/Users/jacob/Desktop/test.txt";

        ReadFromFile(&pathName);
    }

    void Lexer::ReadFromFile(const std::string *pathToSourceFile) {
        std::string sourceCode;

        std::ifstream sourceFile(*pathToSourceFile);

        getline(sourceFile, sourceCode);

        std::cout << sourceCode << std::endl;

        sourceFile.close();
    }
}
