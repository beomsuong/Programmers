#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    for (auto i : queries) {
        int z = i[1];
      
        for (int q = i[0];; q++) {
            char s = my_string[z];
            my_string[z] = my_string[q];
            my_string[q] = s;
            z--;
            if (z <= q)
                break;
        }
    }
    return my_string;
}
