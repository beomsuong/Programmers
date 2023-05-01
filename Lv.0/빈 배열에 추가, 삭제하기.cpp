#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for (int i = 0; i < flag.size(); i++) {
        if (flag[i])
        {
            for (int q = 0; q < arr[i] * 2; q++)
                answer.push_back(arr[i]);
        }
        else
        {
            for (int q = 0; q < arr[i]; q++)
                answer.erase(answer.begin() + answer.size()-1);
        }
  }
    return answer;
}
