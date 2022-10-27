#include "Dealvector.cpp"

#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::vector;


int main()
{
    vector<string> vec_Str;
    for (int i = 0; i < 16; i++)
    {
        vec_Str.push_back(std::to_string(i));
    }
    vector<string> ret_vec = dealStrVector(vec_Str,4);
    for (auto str : ret_vec){
        std::cout << str << std::endl;
    }
}