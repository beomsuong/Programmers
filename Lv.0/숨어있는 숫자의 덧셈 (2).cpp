#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int now = 0;
    for (auto i : my_string) {
        if (i >= '0' && i <= '9') {
                now *= 10;
                now += i - '0';
        }
        else{
            answer += now;
            now = 0;
        }
    }
       answer += now;
    return answer;
}
