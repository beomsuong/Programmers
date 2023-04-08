#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    int sum = 0;

    vector<int> answer;
    for (int i = -1000;;i++) {
        int sum = 0;
        for (int q = 0;q < num;q++) {
            int now = i+q;
            sum += now;
        }
        if (sum == total) {
            for (int q = 0;q < num;q++) {
                int now = i + q;
                answer.push_back(now);
            } return answer;
        }
    }
   
}
