#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    cout<<n<<" is ";
    if(n%2)
        cout<<"odd";
    else 
        cout<<"even";
    return 0;
}
