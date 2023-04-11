#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int a = 10;
    int now = 0;
 while (n != 0)
    {
    answer+= n % 10;
        n /= 10;
    }
        return answer;
}
