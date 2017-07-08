//
//  main.cpp
//  1002
//
//  Created by Pedro Neves Alvarez on 7/8/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
   
    double r;
    const double PI = 3.14159;
    
    cout << "Enter with the radius";
    cin >> r;
    double area = PI*r*r;
    
    printf("A=%.4f\n", area);
    return 0;
}
