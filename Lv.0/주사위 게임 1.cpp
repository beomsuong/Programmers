#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    if (a % 2 == 0 && b % 2 == 0)
    {  
        return abs(a-b);
    }
    else if (a % 2 != 0 && b % 2 != 0)
    {
         return a * a + b * b;
    }
  return 2*(a+b);
}
