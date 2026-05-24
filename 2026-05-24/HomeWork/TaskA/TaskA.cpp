#include <iostream>
using namespace std;
int main() {
    short n; cin >> n;

    int value, count = 0;
    for (int i = 0; i < n; i++){
        cin >> value;
        if (n % 3 == 0 || n % 5 == 0) count++;
    }

    cout << count;

    return 0;
}