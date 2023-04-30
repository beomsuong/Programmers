#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int b1=b;
    vector<int>v;
     while(b != 0){
       v.push_back(b%10);
        b /= 10;
         
    }
    answer=a;
    for(int i =v.size()-1;i>=0;i--){
        answer*=10;
        answer+=v[i];
    }
    answer=max(answer,2*a*b1);
    return answer;
}
