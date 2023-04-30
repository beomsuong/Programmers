#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    int sum = 0;
    for (auto i : intStrs) {
        for (int q = s; q < l+s;q++) {
            sum *= 10;
            sum += i[q] - '0';
        }
        if (sum > k)
            answer.push_back(sum);
        sum = 0;
    }
        return answer;
}
