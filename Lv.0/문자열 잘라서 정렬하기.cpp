#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string s;
    for (auto i : myString){
        if (i == 'x'&&!s.empty()) {
            answer.push_back(s);
            s.clear();
        }
        
        else if(i != 'x')
            s += i;
    }
    if(!s.empty())
    answer.push_back(s);
            sort(answer.begin(), answer.end());
    return answer;
}
