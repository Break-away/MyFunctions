//给定一个字符串数组，以及一个字符串，将字符串数组中的每一个字符串与输入字符串累加，输出累加结果

#include <vector>
#include <string>

using std::vector;
using std::string;

string dealStrVector(const vector<string> &strVec, const string str)
{
    string retStr = "";
    int strNum = strVec.size();
    for (int i = 0 ; i < strNum; i++)
    {
        retStr = retStr + strVec[i] + str;
    }
    return retStr;
}