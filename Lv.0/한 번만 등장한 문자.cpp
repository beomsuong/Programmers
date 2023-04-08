#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int a[32] = { 0, };
    for (auto i : s) {
        a[int(i)-97]++;
    }
    for (int i = 0;i < 32;i++)
    {
        if (a[i] == 1)
            answer += char(i+97);
    }
    return answer;
}
