#include <string>
#include <vector>
#include <sstream>
#include<iostream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream s1(my_string);
    
    string a,b,c;
    s1 >> a;
    answer += stoi(a);
    cout<<answer;
    while(s1>>b>>c){
    if (b == "+")
        answer +=  stoi(c);
    else
        answer -= stoi(c);
    }
    return answer;
}
