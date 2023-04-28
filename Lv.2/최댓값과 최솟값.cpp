#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    int min1 = 9999999999999;
    int max1 =-99999999999999;
    int now = 1;
    int sum = 0;
    bool ma = false;
    for (auto i : s) {
        if (i == '-') {
            ma = true;
        }
        else if (i == ' ')
        {
            if (ma)

                max1 = max(max1, sum * -1);
            else
                max1 = max(max1, sum);
                if (ma)
            min1 = min(min1,  sum * -1 );
                else
             min1 = min(min1, sum );;
                ma = false;
            now = 1;
            sum = 0;
        }
        else {
            sum *= 10;
            sum += i - '0';
        }
    }
    if (ma)

        max1 = max(max1, sum * -1);
    else
        max1 = max(max1, sum);
    if (ma)
        min1 = min(min1, sum * -1);
    else
        min1 = min(min1, sum);
    ma = false;
    cout << min1 << max1;
    if (max1 < 0) {
        max1 *= -1;
        ma = true;
    }
    vector<char> z;
    while (max1 != 0) {
       
        z.push_back((max1 % 10) + '0'); 
   
        max1 /= 10;
    }
    if (ma)
        z.push_back('-');
    z.push_back(' ');
    ma = false;
    if (min1 < 0) {
        ma = true;
        min1 *= -1;
    }
    while (min1 != 0) {
      
        z.push_back((min1 % 10) + '0');  min1 /= 10;
    }
    if (ma)
        z.push_back('-');
    for (int i = z.size() - 1;i >= 0;i--)
        answer += z[i];
    return answer;
}
