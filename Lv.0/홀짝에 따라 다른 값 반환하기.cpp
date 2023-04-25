#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    int a = n % 2;
    for (int i = a; i <= n; i+=2)
    {
        if(a)
        answer += i;
        else
            answer += i*i;
    }
    return answer;
}
