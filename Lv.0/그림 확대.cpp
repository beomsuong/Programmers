#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k)
{
    vector<string> answer;
    string a;
    for (int i = 0; i < picture.size(); i++){
        for(int q=0;q<picture[i].size();q++){
            for(int z=0;z<k;z++){
                a+=picture[i][q];
            }
        }
          for(int z=0;z<k;z++){
              answer.push_back(a);
            }
            a.clear();
    }
    return answer;
}
