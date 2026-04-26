#include <iostream>
using namespace std;
int main() {
    int n, m;
    int arr[100][100];
    cin >> n >> m;
// вставляемый код ниже

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            arr[i][j] = j;
        }
    }

// вставляемый код выше
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}