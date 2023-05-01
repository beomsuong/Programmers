#include <string>
#include <vector>
#include<iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    for (int i = 0; i < query.size(); i++) {
              if (i % 2 == 0) {
            int sv=arr.size();
            for (int q = query[i]+1; q <  sv; q++) {
                arr.erase(arr.begin() +arr.size()-1 );
            }
        }
        if (i % 2 != 0) {
            for (int q = 0; q < query[i]; q++) {
                arr.erase(arr.begin());
            }
        }
    }
    return arr;
}
