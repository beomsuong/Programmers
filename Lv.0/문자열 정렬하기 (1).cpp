#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (auto i : my_string) {
        if (i == '1')
            answer.push_back(1);
        if (i == '2')
            answer.push_back(2);
        if (i == '3')
            answer.push_back(3);
        if (i == '4')
            answer.push_back(4);
        if (i == '5')
            answer.push_back(5);
        if (i == '6')
            answer.push_back(6);
        if (i == '7')
            answer.push_back(7);
        if (i == '8')
            answer.push_back(8);
        if (i == '9')
            answer.push_back(9);
        if (i == '0')
            answer.push_back(0);

    }
    sort(answer.begin(), answer.end());
    return answer;
}
