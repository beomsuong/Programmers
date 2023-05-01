#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    int now = 0;
    for (int i = 1; i <=30; i++) {
        now = 0;
        for (auto q : strArr) {
            if (q.size() == i)
                now++;
        }
        answer = max(now, answer);
    }
    return answer;
}
