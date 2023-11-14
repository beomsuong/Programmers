#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    vector<int>c;
    int a = 0, b = 0;
    int now = 1;
    for (int i = bin1.size() - 1; i >= 0;i--) {
        if (bin1[i] == '1')
            a += now * 1;
        now *= 2;
    }
    now = 1;
    for (int i = bin2.size() - 1; i >= 0;i--) {
        if (bin2[i] == '1')
            b += now * 1;
        now *= 2;
    }
    int sum = a + b;
    while (sum != 0) {
        if (sum % 2 == 1)
            c.push_back(1);
        else
            c.push_back(0);
        sum /= 2;
    }
    for (int i = c.size() - 1; i >= 0;i--)
        answer.push_back((c[i]+'0'));
    return answer.size() == 0 ? "0" : answer;
}
