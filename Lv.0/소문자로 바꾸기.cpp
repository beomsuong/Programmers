#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (auto i : myString) {
        char s = i;
        if (s >= 'A' && s <= 'Z')
        {
            s += 32;
        }
        answer += s;
    }
        return answer;
}
