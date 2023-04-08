#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (auto i : my_string) {
        if (i >= 'A' && i <= 'Z') {
            answer += char(i + 32);
        }
        else if (i >= 'a' && i <= 'z') {
            answer += char(i - 32);
        }
    }
    return answer;
}
