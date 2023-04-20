#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for (int i = 0;i < arr.size();i++) {
        for (int q = 0;q < arr[i];q++) {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}
