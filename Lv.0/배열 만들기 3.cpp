#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for (int i = 0;i < intervals.size();i++) {
        for (int q = intervals[i][0];q <=intervals[i][1];q++)
            answer.push_back(arr[q]);
    }
    return answer;
}
