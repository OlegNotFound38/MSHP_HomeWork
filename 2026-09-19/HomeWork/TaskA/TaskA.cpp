#include <iostream>

using namespace std;

int main(){
    short arr[100], n; cin >> n;

    for (short i = 0; i < n; i++) cin >> arr[i];
   
    for (short i = 0; i < n; i++){
        if (arr[i]%2 == 0) cout << arr[i] << " ";
    }

    for (short i = 0; i < n; i++){
        if (arr[i]%2 != 0) cout << arr[i] << " ";
    }


    return 0;
}