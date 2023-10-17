#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    for (auto i : dic) {
        if(i.size()==spell.size())
        for (int q = 0;q < spell.size();q++) {
            for (int w = 0;w < i.size();w++) {
                if (i[w] == spell[q][0]) {
                    i.erase(i.begin() + w);
                    break;
                }
            }
        }
        if (i.size() == 0)
            return 1;
    }
   
    return 2;
}
