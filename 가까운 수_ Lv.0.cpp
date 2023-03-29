#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 9999999;
    int w = 0;
    for (int i = 0;i < array.size();i++)
    {
        answer = min(answer, abs(array[i] - n));
        w = array[i];
    }
    return w;
}
