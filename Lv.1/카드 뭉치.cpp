#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int a = 0, b = 0,i;
    for (int i = 0;i < goal.size();i++) {
        
        if (cards1[a] == goal[i]) {
            a++;
            continue;
        }
        if (cards2[b] == goal[i]) {
            b++;
            continue;
        }
        
    }

    return (a + b == goal.size()) ? "Yes" : "No";
}
