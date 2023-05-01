#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int a = 0, b = 0;
    answer.push_back(-1);
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 2)
        {
            answer.clear();
            a = i;
            break;
        }
    }
    for (int i = arr.size(); i >=0; i--)
    {
        if (arr[i] == 2)
        {
            b = i;
            break;
        }
    }
    if (answer.size() == 1) {
        return answer;
    }
    for (int i = a; i <= b; i++)
        answer.push_back(arr[i]);
    return answer;
}
