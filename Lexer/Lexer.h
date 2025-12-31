#ifndef COMPILER_LEXER_H
#define COMPILER_LEXER_H
#include <string>

namespace Lexer {
    class Lexer {
    public:
        Lexer();
    private:
        static void ReadFromFile(const std::string *pathToSourceFile);
    };
}

#endif