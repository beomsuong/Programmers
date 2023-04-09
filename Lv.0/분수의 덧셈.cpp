#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int a = numer1 * denom2 + numer2 * denom1;
    int b = denom1 * denom2;
    int c = max(numer1 * denom2 + numer2 * denom1, denom1 * denom2);
        for (int i = c;i > 1;i--) {
            if (a % i == 0 && b % i == 0)
                return { a / i,b / i };
        }
    return {numer1*denom2+numer2*denom1,denom1*denom2};
}
