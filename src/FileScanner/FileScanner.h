//
// Created by jacob on 12/31/2025.
//

#ifndef COMPILER_FILESCANNER_H
#define COMPILER_FILESCANNER_H
#include <string>

namespace Scanner {
    class FileScanner {
    public:
        FileScanner();
        static std::string ScanFile(const std::string& pathToSourceFile);
    };
}



#endif //COMPILER_FILESCANNER_H