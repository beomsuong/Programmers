#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for (int i = 0; i < arr.size(); ){
        if (answer.empty()) {
            answer.push_back(arr[i]);
            i++;
        }
        else if (!answer.empty() && answer.back() == arr[i]) {
            answer.erase(answer.begin() + answer.size() - 1);
            i++;
        }
        else if (!answer.empty() && answer.back() != arr[i]) {
            answer.push_back(arr[i]);
            i++;
        }
    }
    if (answer.empty()) {
        return { -1 };
    }

     return answer;
}
