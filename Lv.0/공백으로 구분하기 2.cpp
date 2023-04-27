#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string s="";
    for (int i = 0;i < my_string.size();i++) {
        if (my_string[i]==' ')
        {
            if (!s.empty())
                answer.push_back(s);
            s.clear();
        }
        else
            s += my_string[i];
    }
    if(my_string.back() != ' ')
        answer.push_back(s);;
    return answer;
}
