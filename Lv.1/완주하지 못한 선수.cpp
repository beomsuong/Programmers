#include <string>
#include <vector>
#include<algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    int i = 0;
    while (completion.size() != 0) {
        if (completion[i] != participant[i])
        {
            return participant[i];
        }
        i++;
    }

    return participant[0];
}
