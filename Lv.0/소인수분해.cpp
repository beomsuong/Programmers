#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    while(n > 1){
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                answer.push_back(i);
                while(n%i==0)
                n /= i;
                break;
            }
        }

    }
    return answer;
}
