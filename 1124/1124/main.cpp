//
//  main.cpp
//  1124
//
//  Created by Pedro Neves Alvarez on 7/9/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    double L, C, R1, R2;
    while(scanf("%lf %lf %lf %lf", &L ,&C, &R1, &R2) == 4) {
        if(L+C+R1+R2 == 0)  break;
       
        double x1, x2, y1, y2;
        x1 = R1, y1 = R1;
        x2 = L-R2, y2 = C-R2;
        double a = R1, b = R2, c = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        if(a+b <= c + 1e-6 && R1+R1 <= L && R1+R1 <= C && R2+R2 <= L && R2+R2 <= C)
            puts("S");
        else
            puts("N");
    }
    return 0;
}
