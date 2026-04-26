#include <iostream>
using namespace std;
int main() {
    int N;
    int arr[100][100];
    cin >> N;

    

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}