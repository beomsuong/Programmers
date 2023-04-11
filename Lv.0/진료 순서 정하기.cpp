#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> a = emergency;
    sort(a.begin(), a.end(),greater<int>());
    for (int i = 0; i < emergency.size();i++) {
        for (int q = 0; q < a.size();q++)
        {
            if (a[q] == emergency[i]) {
                answer.push_back(q+1);

            }
        }
    }
    return answer;
}
