#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int a = 0;
    while (chicken > 0&&a<10) {
        answer += chicken / 10;
        a += chicken % 10;
        chicken /= 10;
        if (a >= 10) {
            a -= 10;
            chicken++;
            answer++;
        }
    }

    return answer;
}
