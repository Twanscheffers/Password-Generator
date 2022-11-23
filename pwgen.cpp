#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <time.h>

using namespace std;

int main() {

    srand(time(NULL));
    int cnt;
    char all[256];

    for(int ch = '!'; ch <= '~'; ch++) {
        all[ch - '!'] = ch;

    }

    cout << "Type amount of characters: ";
    cin >> cnt;

    char password[36];
    for(int i = 0; i < cnt; i++) { 
        password[i] = all[rand() % 92];

    }

    cout << "Your password is: " <<  password << endl;

    return 0;  
}