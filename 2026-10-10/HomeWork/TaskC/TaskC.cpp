#include <iostream>

using namespace std;

void foo(short a, const short& b){
    if (a > b) return;
    cout << a++ << endl;
    foo(a, b);
}

int main(){
    short a, b; cin >> a >> b;
    foo(a, b);

    return 0;
}