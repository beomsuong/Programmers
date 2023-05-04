#include <string>
#include <vector>
#include<math.h>
#include<iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    while (n != 0) {
        v.push_back(n % 3);
        n /= 3;
    }
    int q = 1;
    answer += pow(v.back(), 1);
    for (int i = v.size()-2; i >=0; i--) {
        answer += v[i]*pow(3, q);
 
        q++;
    }
    return answer;
}
