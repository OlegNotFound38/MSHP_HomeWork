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

    int min = arr[1][1];
    for (int i = 0; i < N; i++){
        if (arr[i][i] < min){min = arr[i][i];}
    }

    cout << min;

    return 0;
}