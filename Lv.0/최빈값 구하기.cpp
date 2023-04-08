#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int a[1001] = { 0, };
    for (auto i : array) {
        a[i]++;
    }
    int q = 0;
    int w = 0;
    for (int i = 0;i <= 1000;i++) {
        if (q < a[i]) {
            q = a[i];
            w = i;
        }
    }
    int cnt = 0;
    for (int i = 0;i <= 1000;i++) {
        if (q == a[i]) {
            cnt++;
        }
    }
    return cnt==1?w:-1;
}
