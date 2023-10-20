#include <string>
#include <vector>
#include<sstream>
#include<iostream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
   
    for (auto i : quiz)
    {
        string a,b,c,d,e;
        int z;
        stringstream s(i);
        s >> a >> b >> c>>d>>e;
        if (b == "-")
            z = stoi(a) - stoi(c);
        else
            z = stoi(a) + stoi(c);
            if (stoi(e) == z)
                answer.push_back("O");
            else
                answer.push_back("X");
    }
    return answer;
}
