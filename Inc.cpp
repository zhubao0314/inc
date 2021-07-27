#include "Inc.h"
#include <regex>
#include <algorithm>
#include <iostream>
Inc::Inc(std::string str, std::string delim)
    :mIdentifier(str),mDelimiter(delim)
{

}

std::string Inc::getFlatCase()
{
    std::string id_before = mIdentifier;
    std::string id_after;
    std::regex pattern("\\w+");
    std::smatch smatch;
    std::transform(id_before.begin(), id_before.end(), id_before.begin(), ::tolower);
    while(std::regex_search(id_before, smatch, pattern))
    {
        id_after += smatch[0].str();
        id_before = smatch.suffix();
        if (smatch.suffix() != "")
            id_after += " ";
    }

    return id_after;
}

std::string Inc::getUpperFlatCase()
{
    std::string id_before = mIdentifier;
    std::string id_after;
    std::regex pattern("\\w+");
    std::smatch smatch;
    std::transform(id_before.begin(), id_before.end(), id_before.begin(), ::toupper);
    while(std::regex_search(id_before, smatch, pattern))
    {
        id_after += smatch[0].str();
        id_before = smatch.suffix();
        if (smatch.suffix() != "")
            id_after += " ";
    }

    return id_after;
}

std::string Inc::getCamelCase()
{
    std::string id_before = mIdentifier;
    std::string id_after;
    std::regex pattern("\\w+");
    std::smatch smatch;
    std::transform(id_before.begin(), id_before.end(), id_before.begin(), ::tolower);
    while(std::regex_search(id_before, smatch, pattern))
    {
        std::string temp = smatch[0].str();
        if (smatch.prefix() != "")
            std::transform(temp.begin(), temp.begin() + 1, temp.begin(), ::toupper);
        id_before = smatch.suffix();
        id_after += temp;
    }

    return id_after;
}

std::string Inc::getUpperCamelCase()
{
    std::string id_before = mIdentifier;
    std::string id_after;
    std::regex pattern("\\w+");
    std::smatch smatch;
    std::transform(id_before.begin(), id_before.end(), id_before.begin(), ::tolower);
    while(std::regex_search(id_before, smatch, pattern))
    {
        std::string temp = smatch[0].str();
        std::transform(temp.begin(), temp.begin() + 1, temp.begin(), ::toupper);
        id_before = smatch.suffix();
        id_after += temp;
    }

    return id_after;
}

std::string Inc::getPascalCase()
{
    return getUpperCamelCase();
}

std::string Inc::getSnakeCase()
{
    std::string id_before = mIdentifier;
    std::string id_after;
    std::regex pattern("\\w+");
    std::smatch smatch;
    std::transform(id_before.begin(), id_before.end(), id_before.begin(), ::tolower);
    while(std::regex_search(id_before, smatch, pattern))
    {
        id_after += smatch[0].str();
        id_before = smatch.suffix();
        if (smatch.suffix() != "")
            id_after += "_";
    }

    return id_after;
}

std::string Inc::getScreamingSnakeCase()
{
    std::string id_before = mIdentifier;
    std::string id_after;
    std::regex pattern("\\w+");
    std::smatch smatch;
    std::transform(id_before.begin(), id_before.end(), id_before.begin(), ::toupper);
    while(std::regex_search(id_before, smatch, pattern))
    {
        id_after += smatch[0].str();
        id_before = smatch.suffix();
        if (smatch.suffix() != "")
            id_after += "_";
    }

    return id_after;
}

std::string Inc::getPascalSnakeCase()
{
    std::string id_before = mIdentifier;
    std::string id_after;
    std::regex pattern("\\w+");
    std::smatch smatch;
    std::transform(id_before.begin(), id_before.end(), id_before.begin(), ::tolower);
    while(std::regex_search(id_before, smatch, pattern))
    {
        std::string temp = smatch[0].str();
        std::transform(temp.begin(), temp.begin() + 1, temp.begin(), ::toupper);
        id_before = smatch.suffix();
        id_after += temp;
        if (smatch.suffix() != "")
            id_after += "_";
    }
    return id_after;
}

std::string Inc::getKebabCase()
{
    std::string id_before = mIdentifier;
    std::string id_after;
    std::regex pattern("\\w+");
    std::smatch smatch;
    std::transform(id_before.begin(), id_before.end(), id_before.begin(), ::tolower);
    while(std::regex_search(id_before, smatch, pattern))
    {
        id_after += smatch[0].str();
        id_before = smatch.suffix();
        if (smatch.suffix() != "")
            id_after += "-";
    }

    return id_after;
}

std::string Inc::getScreamingKebabCase()
{
    std::string id_before = mIdentifier;
    std::string id_after;
    std::regex pattern("\\w+");
    std::smatch smatch;
    std::transform(id_before.begin(), id_before.end(), id_before.begin(), ::toupper);
    while(std::regex_search(id_before, smatch, pattern))
    {
        id_after += smatch[0].str();
        id_before = smatch.suffix();
        if (smatch.suffix() != "")
            id_after += "-";
    }

    return id_after;
}

std::string Inc::getPascalKebabCase()
{
    std::string id_before = mIdentifier;
    std::string id_after;
    std::regex pattern("\\w+");
    std::smatch smatch;
    std::transform(id_before.begin(), id_before.end(), id_before.begin(), ::tolower);
    while(std::regex_search(id_before, smatch, pattern))
    {
        std::string temp = smatch[0].str();
        std::transform(temp.begin(), temp.begin() + 1, temp.begin(), ::toupper);
        id_before = smatch.suffix();
        id_after += temp;
        if (smatch.suffix() != "")
            id_after += "-";
    }
    return id_after;
}

std::string Inc::getMagicCase()
{
    std::string id_before = mIdentifier;
    std::string id_after;
    std::regex pattern("\\w+");
    std::smatch smatch;
    std::transform(id_before.begin(), id_before.end(), id_before.begin(), ::tolower);
    while(std::regex_search(id_before, smatch, pattern))
    {
        id_after += smatch[0].str();
        id_before = smatch.suffix();
        if (smatch.suffix() != "")
            id_after += ".";
    }

    return id_after;
}
