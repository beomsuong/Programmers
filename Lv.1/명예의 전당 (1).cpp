#include <string>
#include <vector>
#include<queue>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int,vector<int>,greater<int>> q;

    for (auto i : score) { 
        q.push(i);
        if (q.size() > k) {
            q.pop();
        }
        answer.push_back(q.top());
        
        
    }
    return answer;
}
