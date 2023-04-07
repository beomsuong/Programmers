#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int a = 0;
    for (int i = 0;i < s.size();i++) {
         if (s[i]==' ')
            a = 0;
        else if (a == 0) {
           a = 1;
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = char(s[i] - 32);
            }
            continue;
        }
        if(a==1)
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = char(s[i] + 32);
            }
       
       
        
    }
    return s;
}
