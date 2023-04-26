#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int s = 1;
    while (s <= n/10) {
        s *= 10;
    }
    while (s != 0) {
       
        answer += n / s + '0';
        n = n % s;
         s /= 10;
    }
    return answer;
}
