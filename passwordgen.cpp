#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {

    int cnt;
    char lower[32], upper[32];
    char syms[10] = {'!','@','#','$','%','&','*'};
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    string passw;

    for(int ch = 'a'; ch <= 'z'; ch++) {
        lower[ch - 'a'] = ch; /*ch - 'a', omdat je geen 0 kan aangeven*/
        upper[ch - 'a'] = (char)toupper(lower[ch - 'a']);

    }
    
    cout << "Geef aantal characters: ";
    cin >> cnt;

    return 0;
    
}