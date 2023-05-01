#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string s;
    for (auto i : myStr) {
        if (i != 'a'&& i != 'b'&&i != 'c')
        {
            s += i;
        }
        else
        {
            if (!s.empty())
                answer.push_back(s);
            s.clear();
        }
    }
    if (!s.empty()) {
        answer.push_back(s);
    }
    if (answer.empty())
        return { "EMPTY" };
    return answer;
}
