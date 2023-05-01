#include <string>
#include <vector>
#include<cmath>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for (int i = 0;; )
    {
        
                for (int q = 0; q < 100; q++)
                {
                    if (long(arr.size()) == long(pow(2, q)))
                        return arr;
                }
           
      
        arr.push_back(0);
    }
    return answer;
}
