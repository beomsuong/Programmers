#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (auto i : myString) {
        if (i == 'a')
            answer += 'A';
        else if (i >= 'B' && i <= 'Z')
            answer += i + 32;
        else
            answer+=i;
    }
    return answer;
}
