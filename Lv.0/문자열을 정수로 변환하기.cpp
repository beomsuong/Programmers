#include <string>
#include <vector>

using namespace std;

int solution(string n_str) {
    int answer = 0;
    int now = 1;
    for (int i = n_str.size() - 1;i >= 0;i--) {
        answer+=(n_str[i] - '0')*now;
        now *= 10;
    }
    return answer;
}
