#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for (int i = l;i <= r;i++) {
        int now = i;
        while (now != 0) {
            if (now % 10 == 0|| now % 10 == 5) {
                now /= 10;
            }
            else
                break;
            if(now == 0)
                answer.push_back(i);
        }
    }
    if (answer.empty())
        return { -1 };
    return answer;
}
