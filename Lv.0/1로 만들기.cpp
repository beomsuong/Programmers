#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for (auto i : num_list) {
        int now = i;
        while (now!=1)
        {
            if (now % 2 == 0)
                now /= 2;
            else {
                now -= 1;
                now /= 2;
            }
            answer++;
        }
    }
    return answer;
}
