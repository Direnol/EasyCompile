cmake_minimum_required(VERSION 3.10)
project(Lexer)

set(CMAKE_C_STANDARD 11)

FIND_PACKAGE(FLEX)
set(INPUT_FLEX code_generator/rule.l)
set(OUTPUT_FLEX ${CMAKE_SOURCE_DIR}/src/lex.c)
FLEX_TARGET(lexer ${INPUT_FLEX} ${OUTPUT_FLEX})

FIND_PACKAGE(BISON)
set(INPUT_BISON code_generator/syntax.y)
set(OUTPUT_BISON_C ${CMAKE_SOURCE_DIR}/src/syntax.c)
set(OUTPUT_BISON_H ${CMAKE_SOURCE_DIR}/headers/syntax.h)
BISON_TARGET(syntax ${INPUT_BISON} ${OUTPUT_BISON_C} COMPILE_FLAGS "-v" DEFINES_FILE ${OUTPUT_BISON_H})
ADD_FLEX_BISON_DEPENDENCY(lexer syntax)


set(LEX_SRC src/hash_table.c headers/hash_table.h headers/structs.h ${FLEX_lexer_OUTPUTS})
set(SYN_SRC ${LEX_SRC} ${BISON_syntax_OUTPUTS} src/Ast.c headers/Ast.h)

add_executable(Lexer ${LEX_SRC})
target_link_libraries(Lexer fl glib)

add_executable(Syntax ${SYN_SRC})
target_link_libraries(Syntax m y fl)