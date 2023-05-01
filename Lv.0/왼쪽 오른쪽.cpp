#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int a = 0;
    int num = 0;
    for (auto i : str_list) {
        if (i[0] == 'l')
        {
            a = 1;
            break;
        }
        if (i[0] == 'r')
        {
            a = 2;
            break;
        }
        num++;
    }
    if (a == 0)
        return answer;
    if (a==1)
    {
        for (int i = 0; i < num; i++)
            answer.push_back(str_list[i]);
    }
    else
    {
        for (int i = num+1; i < str_list.size(); i++)
            answer.push_back(str_list[i]);
    }
    return answer;
}
