#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (auto i : queries) {
        int now = arr[i[0]];
        arr[i[0]] = arr[i[1]];
        arr[i[1]] = now;
    }
    return arr;
}
