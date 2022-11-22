#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int cnt;
    char lower[32] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char upper[32];
    char syms[10] = {'!','@','#','$','%','&','*'};
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    string passw;

    for(int i = 0; i < sizeof(lower); i++) {
        upper[i] = (char)toupper(lower[i]);
        /*alle letters in upper*/
    }

    cout << "Aantal characters: ";
    cin >> cnt;

    for(int i = 0; i <= cnt; i++) {
        

    }

    return 0;
    
}