#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 0;i < n;i++) {
        answer++;
        if (answer % 3 == 0) {
            i--;
        }
        else if (answer % 10 == 3)
        {
            i--;
        }
        else if (answer / 10 == 3)
        {
            i--;
        }
        else if (answer / 10 == 13 && answer >= 130)
        {
            i--;
        }
    }

return answer;
}
