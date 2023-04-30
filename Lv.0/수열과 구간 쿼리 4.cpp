#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer(arr.size());
    for (auto i : queries) {
        for (int q = i[0]; q <= i[1]; q++) {
            
            if (q% i[2] == 0) {
                answer[q]++;
            }
        }
    }
    for (int i = 0; i < arr.size();i++) {
        answer[i] += arr[i];
    }
    return answer;
}
