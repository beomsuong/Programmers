#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
        for(int i=0; i<lost.size();i++){
        for(int j=0; j<reserve.size();j++){
            if(lost[i]==reserve[j]){
                 lost.erase(lost.begin()+i);
                reserve.erase(reserve.begin()+j);
                i=-1;
                break;
            }
        }
    }
    int answer =n-lost.size();
    
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    n-=lost.size();
    for(int i=0;i<lost.size();i++){
       for(int q=0;q<reserve.size();q++){
              if(lost[i]==reserve[q]-1||lost[i]==reserve[q]+1){
                     reserve.erase(reserve.begin()+q);
                     answer++;
              }
       }
    }
    return answer;
}
