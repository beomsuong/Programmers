#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int a = 0, b = 0;
    if (arr1.size() != arr2.size())
        return arr1.size() < arr2.size() ? -1 : 1;
    else
    {
        for (int i = 0; i < arr1.size(); i++) {
            a += arr1[i];
            b += arr2[i];
        }
        if (a == b)
            return 0;
        return a < b ? -1 : 1;
    }
    return answer;
}
