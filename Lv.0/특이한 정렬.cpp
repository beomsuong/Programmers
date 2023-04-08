#include <string>
#include <vector>
#include<algorithm>
using namespace std;
int q;
bool cmp(int a,int b){
    if (abs(a - q) < abs(b - q))
        return true;
    else if (abs(a - q) == abs(b - q))
        return a > b ? true:false;
    else
    return false;
    }
vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;q = n;
    sort(numlist.begin(), numlist.end(), cmp);
    
    return numlist;
}
