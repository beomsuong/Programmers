#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer(strArr.size());
    for (int i = 0;i < strArr.size();i++) {
        for(int q=0;q< strArr[i].size();q++)
            if (i % 2 == 0) {
                if (strArr[i][q] >= 'A' && strArr[i][q] <= 'Z')
                    answer[i].push_back(strArr[i][q] + 32);
                else
                    answer[i].push_back(strArr[i][q]);
            }
            else
            {
                if (strArr[i][q] >= 'a' && strArr[i][q] <= 'z')
                    answer[i].push_back(strArr[i][q]- 32);
                else
                    answer[i].push_back(strArr[i][q]);
            }
    }
    return answer;
}
