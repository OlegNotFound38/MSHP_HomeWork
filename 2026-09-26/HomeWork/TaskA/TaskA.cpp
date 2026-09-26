#include <iostream>
#include <fstream>

using namespace std;

short foo(int n){
    short count = 0;
    while (n>0){
        count++;
        n /= 10;
    }

    return count;
}

int main(){
    // ifstream fin("in.txt");
    // ofstream fout("out.txt");

    int n; cin >> n;

    cout << foo(n) << endl;

    // fin.close();
    // fout.close();

    return 0;
}