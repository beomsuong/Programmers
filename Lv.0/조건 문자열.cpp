#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    if (ineq == "<")
    {
        if (eq == "=") {
            if (n <= m) {
                return 1;
            }
            else
                return 0;
        }
        else {
            if (n < m) {
                return 1;
            }
            else
                return 0;
        }

    }
    else {
        if (eq == "=") {
            if (n >= m) {
                return 1;
            }
            else
                return 0;
        }
        else {
            if (n > m) {
                return 1;
            }
            else
                return 0;
        }
    }

        return answer;
}
