#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 0;
    for (int i = 0;i < arr.size();i++) {
        for (int q = 0;q < arr[i].size();q++) {
            if (arr[q][i] != arr[i][q])
                return 0;
        }
    }
    return 1;
}
