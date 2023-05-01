#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> v;
    for (auto i : commands) {
        for (int q = i[0] - 1; q < i[1]; q++) {
            v.push_back(array[q]);
        }
        sort(v.begin(), v.end());
        answer.push_back(v[i[2] -1 ]);
        v.clear();
    }
    return answer;
}
