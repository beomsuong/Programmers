#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int q=i;q<=j;q++){
        int now=q;
        while(now!=0){
            if(now%10==k){
                answer++;
            }
            now/=10;
        }
    }
    return answer;
}
