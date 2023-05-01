#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string s;
    for (int i = 0; i < pat.size(); i++)
        s += myString[i];
    if (s == pat)
        answer++;
    for (int i = pat.size(); i < myString.size(); i++) {

        s.erase(s.begin());
        s += myString[i];
        if (s == pat)
            answer++;
    }
        return answer;
}
