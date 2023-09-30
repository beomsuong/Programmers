#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
vector<int> a;
vector<int> b;
vector<int> c;
vector<int> solution(vector<int> answers)
{
    vector<int> answer;

    vector<int> n = {1, 2, 3, 4, 5};
    for (int i = 0; i < 3000; i++)
    {
        for (int q = 0; q < n.size(); q++)
            a.push_back(n[q]);
    }
    n.clear();
    n = {2, 1, 2, 3, 2, 4, 2, 5};
    for (int i = 0; i < 2000; i++)
    {
        for (int q = 0; q < n.size(); q++)
            b.push_back(n[q]);
    }
    n.clear();
    n = {3,3,1,1,2,2,4,4,5,5};
    for (int i = 0; i < 2000; i++)
    {
        for (int q = 0; q < n.size(); q++)
            c.push_back(n[q]);
    }
    int a1 = 0, b1 = 0, c1 = 0;
  
    for (int i = 0; i<answers.size(); i++)
    {
        if (answers[i] == a[i])
        {
            a1++;
        }
        if (answers[i] == b[i])
        {
            b1++;
        }
        if (answers[i] == c[i])
        {
            c1++;
        }
    }
    if (a1 != 0&&a1>=b1&&a1>=c1)
        answer.push_back(1);
    if  (b1 != 0&&b1>=a1&&b1>=c1)
        answer.push_back(2);
    if  (c1 != 0&&c1>=b1&&c1>=a1)
        answer.push_back(3);
    sort(answer.begin(), answer.end());
   
    return answer;
}
