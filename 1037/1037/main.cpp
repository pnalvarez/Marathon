//
//  main.cpp
//  1037
//
//  Created by Pedro Neves Alvarez on 7/8/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    float number;
    
    cout << "Enter a floating point number" << endl;
    cin >> number;
    
    if(number < 0 || number > 100){
        cout << "Out of interval" << endl;
    }
    else if (number <= 25){
        cout << "Interval (0,25]" << endl;
    }
    else if (number > 25 && number <= 50){
        cout << "Interval (25,50]" << endl;
    }
    else if ( number > 50 && number <= 75){
        cout << "Interval (50, 75]" << endl;
    }
    else{
        cout << "Interval (75,100]" << endl;
    }
    
    return 0;
}
