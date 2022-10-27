//给定一个字符串数组，以及一个整数n，将字符串数组中的字符串以n个为一组组成一个字符串，并将字符串存入新的数组中，输出该数组

#include <vector>
#include <string>

using std::vector;
using std::string;

vector<string> dealStrVector(vector<string> strVec, int n)
{
    //计算可以组成多少个字符串
    int strNum = strVec.size() / 4;
    vector<string> retVec(strNum);

    for (int i = 1 ; i <= strNum; i++)
    {
        string temStr = "";
        for (int j = i*4 -4; j < i*4 && j < strVec.size(); j++)
        {
            if (temStr == "")
                temStr = strVec[j];
            else
                temStr = temStr + " " + strVec[j];
        }
        retVec.emplace_back(temStr);
    }
    return retVec;
}