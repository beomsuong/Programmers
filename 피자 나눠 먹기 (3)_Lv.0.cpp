#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    for(int i =1;;i++)
    {
        if(slice*i>=n)
            return i;
    }
    return answer;
}
