#include <iostream>
#include "Inc.h"
using namespace std;

int main()
{
    cout << "Input: Hello World!" << endl;
    Inc inc("fan Lv Chao is something2 123", " ");
    cout<<inc.getFlatCase()<<endl;
    cout<<inc.getUpperFlatCase()<<endl;
    cout<<inc.getCamelCase()<<endl;
    cout<<inc.getUpperCamelCase()<<endl;
    cout<<inc.getPascalCase()<<endl;
    cout<<inc.getSnakeCase()<<endl;
    cout<<inc.getScreamingSnakeCase()<<endl;
    cout<<inc.getPascalSnakeCase()<<endl;
    cout<<inc.getKebabCase()<<endl;//kebab-case
    cout<<inc.getScreamingKebabCase()<<endl;//KEBAB-CASE
    cout<<inc.getPascalKebabCase()<<endl;;//Pascal-Kebab-Case
    cout<<inc.getMagicCase()<<endl;//magic.case
    return 0;
}
