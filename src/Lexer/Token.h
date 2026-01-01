#pragma once
#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include <utility>

#include "TokenTypes.h"

namespace Lexer {
    struct Token {
        TokenTypes type;
        std::string lexeme;
        int line;

        Token(const TokenTypes type, std::string  lexeme, const int line) : type(type), lexeme(std::move(lexeme)), line(line) {}
    };
}

#endif //TOKEN_H