#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> m;
    for (int i = 0;i < name.size();i++) {
        m[name[i]] = yearning[i];
    }
    for (auto i : photo) {
        int sum = 0;
        for (int q = 0;q < i.size();q++) {
            sum += m[i[q]];
        }
        answer.push_back(sum);
    }
    return answer;
}
