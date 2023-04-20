#include <string>
#include <vector>
#include<map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string,int> m;
    map<int, string>n;
    for (int i = 0;i < players.size();i++) {
        m[players[i]] = i;
        n[i] = players[i];
  }
    for (int i = 0;i < callings.size();i++)
    {
        string s = n[m[callings[i]] - 1];
        int z = m[callings[i]]-1;
        n[m[callings[i]]-1] = callings[i];
        m[callings[i]] = m[callings[i]] - 1;
        n[z + 1] = s;
        m[s] = z+1;

    }
    for (int i = 0;i < players.size();i++) {
        answer.push_back(n[i]);
    }
    return answer;
}
