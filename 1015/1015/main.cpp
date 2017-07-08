//
//  main.cpp
//  1015
//
//  Created by Pedro Neves Alvarez on 7/8/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

typedef struct point{
    double x;
    double y;
} Point;

int main(int argc, const char * argv[]) {

    Point p1,p2;
    
    cout << "Enter the first" << endl;
    cin >> p1.x >> p1.y;
    cout << endl << "Enter the second" << endl;
    cin >> p2.x >> p2.y;
    
    double dist = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
    
    printf("%.4f\n", dist);
    
    return 0;
}
