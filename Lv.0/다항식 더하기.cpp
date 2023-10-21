#include <string>
#include <vector>
#include<sstream>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream s1(polynomial);
    string  s;
    int a = 0, b = 0;
    while (s1 >> s) {
        if (s.back() == '+')
            continue;
        else if (s.back() == 'x')
        {
            string z;
          for(int i=0;i<s.size();i++){
                if(s[i]!='x')
                    z+=s[i];
              else
                  break;
          }
            if(z.size()==0)
                a++;
            else
                  a += stoi(z);
        }
        else
            b += stoi(s);
        }
   if (a != 0&&b!=0) {
     answer += a==1?"":to_string(a);
     answer += "x + ";
     answer += to_string(b);
 }
 if (a == 0 && b != 0) {
    
     answer += to_string(b);
 }
 if (a != 0 && b == 0) {
     answer += a==1?"":to_string(a);
     answer += "x";
 }
    return answer;
}
