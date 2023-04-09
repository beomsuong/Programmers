#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    string s = before;
   int a[26] = { 0, };
   for (int i = 0;i < before.size();i++) {
       a[before[i] - 97]++;
    }
   for (int i = 0;i < before.size();i++) {
       a[after[i] - 97]--;
   }
   for (int i = 0;i < 26;i++)
   {
       if (a[i] != 0)
           return 0;
   }
    return 1;
}
