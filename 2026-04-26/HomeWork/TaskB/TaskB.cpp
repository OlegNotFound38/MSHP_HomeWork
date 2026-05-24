#include <iostream>
using namespace std;
int main() {
    int N;
    int arr[500][500];
    cin >> N;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++){
        cout << arr[i][N-1-i] << " ";
    }

    return 0;
}