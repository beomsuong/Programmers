#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    answer.push_back(arr[0]);
    int now = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (now+1 == k)
            break;
        for (int q = 0; q < answer.size(); q++) {
            if (arr[i] == answer[q])
            {
                break;
            }
            if (q== answer.size()-1)
            {
                answer.push_back(arr[i]);
                now++;
            }
        }
    }
    for (int i = answer.size(); i < k; i++)
        answer.push_back(-1);
    return answer;
}
