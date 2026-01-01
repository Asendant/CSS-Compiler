cmake_minimum_required(VERSION 4.1)
project(Compiler)

set(CMAKE_CXX_STANDARD 20)

add_executable(Compiler main.cpp
        src/Lexer/Lexer.cpp
        src/Lexer/Lexer.h
        src/FileScanner/FileScanner.cpp
        src/FileScanner/FileScanner.h
        src/Lexer/TokenTypes.h
        src/Lexer/token.h
)
