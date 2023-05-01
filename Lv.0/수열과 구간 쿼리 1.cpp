#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (auto i : queries) {
        for (int q = i[0]; q <= i[1]; q++) {
            arr[q] += 1;
        }
    }
    return arr;
}
