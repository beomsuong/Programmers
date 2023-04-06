#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for (int i = 0;i < s1.size();i++) {
        for (int q = 0;q < s2.size();q++) {
            if (s1[i] == s2[q])
                answer++;
        }
    }
    return answer;
}
