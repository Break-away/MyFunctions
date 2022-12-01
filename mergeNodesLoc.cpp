//给定一个坐标组成的vector，单个坐标用array组成，将多个输入的坐标组成一个字符串

#include <vector>
#include <string>
#include <array>
#include <sstream>
#include <iostream>
#include <iomanip>

using std::vector;
using std::string;

string mergeNodeLoc(const std::vector<std::array<double,3>> &pt)
{
    int ptSize = pt.size();
    std::string retStr = std::string();
    if (0 == ptSize) 
        return retStr;
    for (int i=0; i<ptSize; ++i)
    {
        std::string tempStr = std::string();
        for (int j=0; j<3; ++j)
        {
            std::stringstream ss;
            double d = pt.at(i).at(j);
            ss << std::setprecision(15) << d;
            if (tempStr.empty())
                tempStr += ss.str();
            else
                tempStr += " " + ss.str();
        }
        if (retStr.empty())
            retStr += tempStr;
        else
            retStr += " " + tempStr;
    }
    return retStr;
}