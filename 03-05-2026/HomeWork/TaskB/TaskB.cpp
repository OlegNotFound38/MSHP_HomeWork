#include <iostream>
using namespace std;
int main() {
    int arr[100][100],
    N, M; cin >> N >> M;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }

    int column_sum = 0;
    for (int j = 0; j < M; j++){
        column_sum = 0;
        for (int i = 0; i < N; i++){column_sum += arr[i][j];}

        cout << column_sum << " ";
    }

    return 0;
}