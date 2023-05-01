#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    bool a = true;
    while (a)
    {
        answer++;
        a = false;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                arr[i] /= 2;
                a = true;
            }
            else  if (arr[i] < 50 && arr[i] % 2 != 0) {
                arr[i] *= 2;
                arr[i]++;
                a = true;
            }
        }
    }
    return answer-1;
}
