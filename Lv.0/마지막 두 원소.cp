#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int a;
    if((num_list.back() > num_list[num_list.size() - 2])){
            a=-num_list[num_list.size() - 2] + num_list.back();
        num_list.push_back(a);
    }
    else  {
        a = num_list.back() * 2;
        num_list.push_back(a);
    }
        
    return num_list;
}
