#include <iostream>

using namespace std;

void foo(long a, short& sum){
    if (a<=0) return;
    if (a%10%2 == 0) sum++;
    foo(a/10, sum);
}

int main(){
    long a; cin >> a;

    short sum = 0;
    foo(a, sum);

    cout << sum;

    return 0;
}
