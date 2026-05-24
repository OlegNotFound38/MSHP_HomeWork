#include <iostream>
using namespace std;
int main() {
    short n; cin >> n;

    short** arr = new short*[n];
    for (short i = 0; i < n; i++){
        arr[i] = new short[n];

        for (short j = 0; j < n; j++) cin >> arr[i][j];
    }

    for (short i = n-1; i >= 0; i--){
        for (short j = 0; j < n; j++){
            if (j == i) cout << arr[i][j]<< " ";
        }
    }
    

    for (short i = 0; i < n; i++) delete[] arr[i];
    delete[] arr;

    return 0;
}