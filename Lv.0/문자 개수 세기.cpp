#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    int a[100] = { 0, };
  
    for (auto i : my_string) {
        if(i>='a'&&i<='z')
              a[i -'a' + 26]++;
        else
            a[i - 'A']++;
    }
    for (int i = 0; i < 52; i++)
        answer.push_back(a[i]);
    return answer;
}
