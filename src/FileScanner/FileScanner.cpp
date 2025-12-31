#include "FileScanner.h"
#include <iostream>
#include <fstream>

namespace Scanner {
     std::string FileScanner::ScanFile(const std::string& pathToSourceFile) {
        std::string sourceCode;


        std::ifstream sourceFile(pathToSourceFile);

        std::string currentLine;
        while (getline(sourceFile, currentLine)) {
            sourceCode += currentLine;
        }

        sourceFile.close();

        return sourceCode;
    }
}