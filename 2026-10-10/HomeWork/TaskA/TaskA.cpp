#include <iostream>

using namespace std;

void foo(int a){
    if (a <= 0) return;
    cout << a%10 << " ";
    foo(a /= 10);
}

int main(){
    int a; cin >> a;
    foo(a);

    return 0;
}