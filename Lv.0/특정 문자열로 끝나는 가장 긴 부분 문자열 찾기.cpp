#include <string>
#include <vector>
using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    string s;
    for (int i = myString.size() - pat.size(); i < myString.size(); i++) {
        s += myString[i];
    }
    if (s == pat) {
        for (int q = 0; q < myString.size(); q++)
        {
            answer += myString[q];
        }
        return answer;
    }
    for (int i = myString.size() - 1 - pat.size(); i >= 0; i--) {
        s.erase(s.begin() + s.size() - 1);
        s.insert(s.begin(), myString[i]);
        if (s == pat) {
            for (int q = 0; q < i + pat.size(); q++)
            {
                answer += myString[q];
            }
            return answer;
        }
    }
    return answer;
}
