#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    vector<int> a1;
    vector <int> b1;
    while (a != 0) {
        a1.push_back(a % 10);
        a /= 10;
    }
    while (b != 0) {
        b1.push_back(b % 10);
        b /= 10;
    }
    a=0;b=0;
    for (int i = a1.size() - 1; i >= 0; i--) {
        a *= 10;
        a += a1[i];
    }
    for (int i = b1.size() - 1; i >= 0; i--) {
        a *= 10;
        a += b1[i];
    }
   
    for (int i = b1.size() - 1; i >= 0; i--) {
        b *= 10;
        b += b1[i];
    } 
    for (int i = a1.size() - 1; i >= 0; i--) {
        b *= 10;
       b += a1[i];
    }
    return a<b?b:a;
}
