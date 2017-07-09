//
//  main.cpp
//  2235
//
//  Created by Pedro Neves Alvarez on 7/8/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    double a, b, c;
    
    cout << "Enter your credits" << endl;
    cin >> a >> b >> c;
    
    //first stage: discover if any two of the values are same
    
     if(a == b || b == c || a == c)
        cout << "S";
    //second stage: discover of any of the three is the sum of the other two
    else{
        
        if(a == b + c || b == a + c || c == a + b){
            cout << "S";
        }
        else{
            cout << "N";
        }
        
    }
    
    return 0;
}
