//
//  main.cpp
//  1308
//
//  Created by Pedro Neves Alvarez on 7/10/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(){
    
    int n,i;
    long long int m;
    double delta, y;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%lld", &m);
        delta = 1 + 8*m;
        y = (-1 + sqrt(delta))/2;
        printf("%lld\n", (long long int)y);
    }
    
    return 0;
}
