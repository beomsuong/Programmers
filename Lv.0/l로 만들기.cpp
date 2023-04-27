#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (auto i : myString) {
        if (i < 'l')
            answer += 'l';
        else
            answer += i;
    }
    return answer;
}
