#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for (auto i : arr) {
        if (k % 2 == 0)
            answer.push_back(i + k);
        else
            answer.push_back(i * k);
    }
    return answer;
}
