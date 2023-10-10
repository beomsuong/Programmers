#include <string>
#include <vector>
using namespace std;

int solution(string t, string p)
{
    int answer = 0;
    string a;
    for (int i = 0; i < p.size(); i++)
    {
        a += t[i];
    }
    for (int i = p.size(); i < t.size(); i++)
    {
        if (stoll(a) <= stoll(p))
            answer++;
        a += t[i];
        a.erase(a.begin());
    }
    if (stoll(a) <= stoll(p))
        answer++;
    return answer;
}
