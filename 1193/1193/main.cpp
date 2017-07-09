//
//  main.cpp
//  1193
//
//  Created by Pedro Neves Alvarez on 7/9/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

char digit_hex (long x) {
    if (x >= 0 && x < 10)
        return x+'0';
    else if (x < 16)
        return x-10+'a';
    else
        return '!';
}

string tobin (long x) {
    string aux;
    while (x > 0) {
        char c = x%2+'0';
        aux = c + aux;
        x /= 2;
    }
    return aux;
}

string tohex (long x) {
    string aux;
    while (x > 0) {
        aux = digit_hex(x%16) + aux;
        x /= 16;
    }
    return aux;
}

int main () {
    char str[50];
    string type;
    long x, n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str >> type;
        
        cout << "Case " << i+1 << ':' << endl;
        if (type == "bin") {
            x = strtol(str, 0, 2);
            long y = (long) x;
            cout << y << " dec" << endl;
            cout << tohex(y) << " hex" << endl;
        } else if (type == "dec") {
            x = strtol(str, 0, 10);
            cout << tohex(x) << " hex" << endl;
            cout << tobin(x) << " bin" << endl;
        } else {
            x = strtol(str, 0, 16);
            cout << x << " dec" << endl;
            cout << tobin(x) << " bin" << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}
