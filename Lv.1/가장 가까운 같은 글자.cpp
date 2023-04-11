#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int a[50] = { 0, };
    for(int i=0;i<50;i++)
        a[i]=-1;
    for (int  i = 0;i < s.size();i++) {
        if (a[s[i] - 'a'] == -1) {
            answer.push_back(-1);
            a[s[i] - 'a'] = i;
        }
        else
        {
            answer.push_back(i - a[s[i] - 'a']);
            a[s[i] - 'a'] = i;
        }
    }
    return answer;
}
