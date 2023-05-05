#include <string>
#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int now = m;
    bool a = false;
    for (int i = 1; i <= n; i++) {

        if (a)
        {
            now--;
            if (now < 0)
            {
                now = m;
                a = false;
            }
        }
        for (auto q : section) {
            if (q == i) {
                if (now == m) {
                    answer++;
                    now--;
                }
                a = true;
                break;
            }
        }
    }
    return answer;
}
