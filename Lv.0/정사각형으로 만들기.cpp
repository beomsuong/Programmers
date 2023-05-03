#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<int> answer;
    int n = arr[1].size();
    if (arr.size() > arr[1].size()) {
        for (int i = 0; i < arr.size(); i++) {
            for (int q = arr[i].size(); q < arr.size(); q++)
                arr[i].push_back(0);
        }
    }
    else if (arr.size() < n) {
        for (int i = 0; i < n; i++)
            answer.push_back(0);
            for (int i = arr.size(); i < n; i++) {
                    arr.push_back(answer);
            }
    }
    return arr;
}
