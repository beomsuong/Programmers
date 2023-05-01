#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    string s;
    for (int i = 0; i < str1.size(); i++) {
        s += str2[i];
    }
    for (int i = str1.size(); i < str2.size(); i++) { 
 
        if (s == str1)
            return 1;
        s.erase(s.begin() + 0);
        s+=str2[i];
       
    }
    if (s == str1)
        return 1;
    return 0;
}
