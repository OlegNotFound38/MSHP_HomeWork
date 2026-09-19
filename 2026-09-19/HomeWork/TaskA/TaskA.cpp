#include <fstream>

using namespace std;

int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    short arr[100], n; fin >> n;

    for (short i = 0; i < n; i++) fin >> arr[i];
   
    for (short i = 0; i < n; i++){
        if (arr[i]%2 == 0) fout << arr[i] << " ";
    }

    for (short i = 0; i < n; i++){
        if (arr[i]%2 != 0) fout << arr[i] << " ";
    }

    fin.close();
    fout.close();

    return 0;
}