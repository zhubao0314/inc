#ifndef INC_H
#define INC_H

#include <string>
class Inc
{
public:
    Inc(std::string str, std::string delim);
    virtual ~Inc() {};
public:
    std::string mIdentifier;
    std::string mDelimiter;
    std::string getFlatCase();//flat case
    std::string getUpperFlatCase();//FLAT CASE
    std::string getCamelCase();//camelCase
    std::string getUpperCamelCase();//CamelCase
    std::string getPascalCase();//PascalCase
    std::string getSnakeCase();//snake_case
    std::string getScreamingSnakeCase();//SCREAMING_SNAKE_CASE
    std::string getPascalSnakeCase();//Pascal_Snake_Case
    std::string getKebabCase();//kebab-case
    std::string getScreamingKebabCase();//KEBAB-CASE
    std::string getPascalKebabCase();//Pascal-Kebab-Case
    std::string getMagicCase();//magic.case
};

#endif // INC_H
