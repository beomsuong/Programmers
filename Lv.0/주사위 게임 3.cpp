#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    vector<int> v;
    v.push_back(a);
     v.push_back(b);
     v.push_back(c);
     v.push_back(d);
    sort(v.begin(),v.end());
    if(v[0]==v[3])
        return v[0]*1111;
    
    
    else if(v[0]==v[2])
        return (10*v[0]+v[3])*(10*v[0]+v[3]);
        else if(v[1]==v[3])
        return (10*v[3]+v[0])*(10*v[3]+v[0]);
    
    
    else if(v[0]==v[1]&&v[2]==v[3]&&v[0]!=v[3])
        return (v[0]+v[3])* abs(v[0]-v[3]);
    
        else if (v[3]==v[2]&&v[1]!=v[0])
           return v[1]*v[0];
    
     else if (v[2]==v[1]&&v[3]!=v[0])
       return     v[3]*v[0];
    
      else if (v[1]==v[0]&&v[3]!=v[2])
       return     v[3]*v[2];
     else if (v[3]==v[2]&&v[1]!=v[0])
       return     v[1]*v[0];
    else 
        return v[0];
    return answer;
}
