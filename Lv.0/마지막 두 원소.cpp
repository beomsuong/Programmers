#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    if(num_list.back()>num_list[num_list.size()-2]){
       num_list.push_back(num_list.back()-num_list[num_list.size()-2]);
    }
    else{
         num_list.push_back(num_list.back()*2);
    }
    
    return num_list;
}
