#include <bits/stdc++.h>

using namespace std;

int main(){
    int i = 1, j;
    do {
        j = 1;
        do {
            cout << "* ";
            j++;
        } while (j <= i);
        cout << "\n";
        i++;
    } while (i <= 5);

    return 0;
}