#include <iostream>
using namespace std;
int main() {
    int n;
    int arr1d[500], arr2d[500][500];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr1d[i];

// вставляемый код ниже



// вставляемый код выше

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}