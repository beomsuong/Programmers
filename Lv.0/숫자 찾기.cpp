#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    int a=1;
    while(num!=0){
        if(num%10==k)
            answer=a;
        a++;
        num/=10;
    }
    return answer!=-1?a-answer:-1;
}
