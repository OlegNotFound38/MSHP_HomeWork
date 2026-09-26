#include <iostream>

using namespace std;

bool foo(int a, short value){
    while (a >= 0){
        if (a % 10 == value) return true;
        a /= 10;
    }

    return false;
}

int main(){
    short n; cin >> n;
    int arr[100];
    for (short i = 0; i < n; i++) cin >> arr[i];
    short k; cin >> k;

    short sum = 0;
    for (short i = 0; i < n; i++){
        if (foo) sum++;
    }

    cout << sum << endl;

    return 0;
}