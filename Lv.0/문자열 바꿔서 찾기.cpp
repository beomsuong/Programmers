#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string s;
    for (int i = 0; i < myString.size(); i++)
    {
        if (myString[i] == 'A')
            myString[i] = 'B';
        else
            myString[i] = 'A';
    }
    for (int i = 0; i < pat.size(); i++) {
        s += myString[i];
    }
    for (int i = pat.size(); i < myString.size(); i++) {
 
        if (s == pat)
            return 1;
        s.erase(s.begin() + 0);
        s+= myString[i];
       
    }
    if (s == pat)
        return 1;
    return 0;
}
