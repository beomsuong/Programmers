#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string binomial) {
    int answer = 0;
	string a, b, c;
	stringstream s(binomial);
	s >>a >> b >> c;
	if (b == "+")
		return  stoi(a) + stoi(c);
    	if (b == "-")
		return  stoi(a) - stoi(c);
    	if (b == "*")
		return  stoi(a) * stoi(c);
}
