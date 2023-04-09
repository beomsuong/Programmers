#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    for (int q = 0;q < A.size();q++) {
        if (A == B)
            return q;
        int save = A[A.size() - 1];
        for (int i = A.size() - 1;i >= 1;i--) {
            A[i] = A[i - 1];
        }
        A[0] = save;

    }
        return -1;
}
