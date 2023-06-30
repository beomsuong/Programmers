#include <string>
#include <vector>

using namespace std;
string solution(string code) {
    string answer = "";
    bool now=false;
    for(int i=0;i<code.size();i++){
        if(code[i]=='1'){    
            now=!now;
            continue;
        }       
        if(now){
            if(i%2==1)
                answer+=code[i];
        }
        else{
            if(i%2==0)
                answer+=code[i];
            }
    }
    return answer.empty()?"EMPTY":answer;
}
