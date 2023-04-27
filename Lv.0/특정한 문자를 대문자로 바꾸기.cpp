#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    for (auto i :my_string) {
        if (i == alp[0])
            answer += i - 32;
        else
            answer += i;
    }
    return answer;
}
