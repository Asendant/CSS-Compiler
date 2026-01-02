//
// Created by jacob on 1/2/2026.
//

#ifndef COMPILER_TOKENLOOKUPTABLE_H
#define COMPILER_TOKENLOOKUPTABLE_H
#include <string>
#include <unordered_map>

#include "TokenTypes.h"

namespace Lexer {
    class TokenLookupTable {
    public:
        const std::unordered_map<std::string, TokenType> tokenTable = {
            // Keywords
            {"function", TokenType::FUNCTION},
            {"if", TokenType::IF},
            {"else", TokenType::ELSE},
            {"while", TokenType::WHILE},
            {"for", TokenType::FOR},
            {"return", TokenType::RETURN},
            {"var", TokenType::VAR},

            // Types
            {"int", TokenType::TYPE_INT},
            {"float", TokenType::TYPE_FLOAT},
            {"string", TokenType::TYPE_STRING},
            {"bool", TokenType::TYPE_BOOL},

            // Boolean literals
            {"true", TokenType::BOOL_LITERAL},
            {"false", TokenType::BOOL_LITERAL},

            // Operators
            {"+", TokenType::PLUS},
            {"-", TokenType::MINUS},
            {"*", TokenType::MUL},
            {"/", TokenType::DIV},

            {"==", TokenType::EQUAL_TO},
            {"<", TokenType::LESS},
            {">", TokenType::GREATER},

            {"&&", TokenType::AND},
            {"||", TokenType::OR},
            {"=", TokenType::ASSIGN},

            // Punctuation
            {"(", TokenType::LEFT_PAREN},
            {")", TokenType::RIGHT_PAREN},
            {"{", TokenType::LEFT_BRACE},
            {"}", TokenType::RIGHT_BRACE},

            {",", TokenType::COMMA},
            {":", TokenType::COLON},
            {";", TokenType::SEMICOLON},
            {"->", TokenType::ARROW}
        };
    };
}
#endif //COMPILER_TOKENLOOKUPTABLE_H