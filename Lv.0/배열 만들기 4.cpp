#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;
    while (i < arr.size()) {
        if (stk.empty()) {
            stk.push_back(arr[i]);
              i++;
        }
        else if (!stk.empty() && stk.back() < arr[i]){
            stk.push_back(arr[i]);
        i++;
        }
        else if (!stk.empty() && stk.back() >= arr[i])
            stk.erase(stk.begin()+stk.size()-1);

    }
    return stk;
}
