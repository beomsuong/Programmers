#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (auto i : my_string) {
        if (int(i) >= 49 && int(i) <= 57) {
            answer += i - 48;
        }
    }
    return answer;
}
