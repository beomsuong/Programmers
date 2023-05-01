#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int now = 0;
    for (int i = 0; i < myString.size(); i++) {
        if (myString[i] == 'x')
        {
            answer.push_back(now);
            now = -1;

        }
        now++;
    }
    answer.push_back(now);
    return answer;
}
