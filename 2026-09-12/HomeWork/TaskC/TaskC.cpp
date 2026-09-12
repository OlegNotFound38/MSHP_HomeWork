#include <iostream>

using namespace std;

int main (){
    int a, b; cin >> a >> b;

    for (int i = 1; i*i <= b; i++){
        if (i*i >= a) cout << i*i << " "; // && i*i <= b)
    }

    return 0;
}