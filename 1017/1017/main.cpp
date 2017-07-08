//
//  main.cpp
//  1017
//
//  Created by Pedro Neves Alvarez on 7/8/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>

using namespace std;

int getdistance(int time, int speed){
    return time * speed;
}
int main(int argc, const char * argv[]) {
    
    double time, speed = 0;
    const double vazion = 12;
    
    cin >> time; cin >> speed;
    int distance = getdistance(time, speed);
    
    double liters = distance * 1.0 / vazion;
    
    printf("%.3f",liters);
    
    return 0;
}

