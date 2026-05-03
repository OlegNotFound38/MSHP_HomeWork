#include <iostream>
using namespace std;
int main() {
    int arr[100][100], 
    n, m; cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    bool flag;
    for (int j = 0; j < m; j++){
        flag = true;
        for (int i = 0; i < n; i++){
            if (arr[i][j] <= 0){flag = false;}
        }

        if (flag = true){
            cout << "YES" << endl;
            cout << j << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 1;
}