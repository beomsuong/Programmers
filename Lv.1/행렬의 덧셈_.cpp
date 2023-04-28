#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size());
    for (int i = 0;i < arr1.size();i++) {
        for (int q = 0;q < arr1[i].size();q++) {
            answer[i].push_back(arr1[i][q] + arr2[i][q]);
        }
    }
    return answer;
}
