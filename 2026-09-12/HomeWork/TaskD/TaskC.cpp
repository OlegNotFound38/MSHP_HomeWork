#include <iostream>

using namespace std;

int main(){
    long long n; cin >> n;
    short sum = 0;

    while (n > 0){
        if (n%10 != 0 && n%2 == 0) sum++;
        n /= 10;
    }

    cout << sum << endl;

    return 0;
}