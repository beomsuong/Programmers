#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (long long i = 1;i <=n;i++) {
        if ((n / i) * i == n)
            answer++;
    }
    return answer;
}
