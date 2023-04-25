#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    for (int i = 0;i < my_string.size();i++) {
        string now = "";
        
            for (int q = i;q < my_string.size();q++){
                now += my_string[q];

        }
            answer.push_back(now);
    }
    sort(answer.begin(), answer.end());
    return answer;
}
