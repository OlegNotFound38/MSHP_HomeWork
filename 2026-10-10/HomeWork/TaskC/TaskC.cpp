#include <iostream>

using namespace std;

char foo(short value){
    switch (value)
    {
    case 17:
        return 'H';
    
    case 33:
        return 'W';

    case 11:
        return 'd';
    
    case 6:
        return 'e';

    case 0:
        return 'l';

    case 71:
        return 'o';

    case 100:
        return 'r';

    case 123:
        return ',';
    }

    return '!';
}

int main(){
    short n; cin >> n;
    short arr[100];
    for (short i = 0; i < n; i++) cin >> arr[i];

    for (short i = 0; i < n; i++) cout << foo(arr[i]) << ' ';
}