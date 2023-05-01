#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (int i = 0; i < queries.size(); i++) {
        int now = -1;
        for (int q = queries[i][0]; q <= queries[i][1]; q++) {
            if (arr[q] > queries[i][2])
            {
                if (now == -1)
                {
                    now = arr[q];
                }
                else
                    now = min(arr[q], now);
            }
        }
        answer.push_back(now);
    }
    return answer;
}
