#include <string>
#include <vector>
#include<algorithm>
using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    sort(indices.begin(), indices.end());
    int now = 0;
   
    for (int i = 0;i < indices.size();i++) {
         my_string.erase(my_string.begin()+indices[i]-i);
    }
    return my_string;
}
