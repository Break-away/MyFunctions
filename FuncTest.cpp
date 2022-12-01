#include "Dealvector.cpp"


#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

using std::string;
using std::vector;


int main()
{
    // vector<string> vec_Str;
    // for (int i = 0; i < 16; i++)
    // {
    //     vec_Str.push_back(std::to_string(i));
    // }
    // vector<string> ret_vec = dealStrVector(vec_Str,4);
    // for (auto str : ret_vec){
    //     std::cout << str << std::endl;
    // }
    /*string test = "abcesed";
    std::cout << "test.substr()" << " " << test.substr() << std::endl;
    std::cout << "test.substr(0,2)" << " " << test.substr(0,2) << std::endl;
    std::cout << "test.substr(2) " << test.substr(2) << std::endl;*/

    std::stringstream os;
    double d = 12.938217289;
    os << std::setprecision(15) << d;
    string test = os.str();
    //string test = std::to_string(d);
    std::cout << "test.substr()" << " " << test << std::endl;
    return 0;
}