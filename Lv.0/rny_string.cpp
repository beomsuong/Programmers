#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    for(int i =0;i<rny_string.size();i++)
    {   
        if(rny_string[i]=='m')
        { 
            answer+='r' ;
            answer+='n';
           
         }
        else
            answer+=rny_string[i];
    }
    return answer;
}
