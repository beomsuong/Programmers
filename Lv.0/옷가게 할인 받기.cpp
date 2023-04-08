#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    
    if (price < 100000 )
        return price;
    if (price >= 100000 && price < 300000)
        return price *95/100;
    if (price >= 300000 && price < 500000)
        return price * 90 / 100;
    if (price >= 500000)
        return price * 80 / 100;
    return answer;
}
