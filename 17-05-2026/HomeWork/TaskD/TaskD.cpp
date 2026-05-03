#include <iostream>
using namespace std;
int main() {
    int n;
    int arr1d[500], arr2d[500][500];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr1d[i];

// вставляемый код ниже

for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        if (i == j) arr2d[i][j] = 0;// на главной диагонали записывается число 0.
        else if (arr1d[i] > arr1d[j]) arr2d[i][j] = arr1d[i];//arr1d[i] больше
        else arr2d[i][j] = arr1d[j];//arr1d[j] больше
    }
}

// вставляемый код выше

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}