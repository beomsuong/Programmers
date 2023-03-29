#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 9999999;
    int w = 99999999;
    sort(array.begin(), array.end());
    for (int i = array.size()-1;i>=0;i--)
    {
        if (abs(array[i] - n) <= answer)
        {
            answer = abs(array[i] - n);

              w = array[i];
        }
         
    }
    return w;
}
