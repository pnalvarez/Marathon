//
//  main.cpp
//  1220
//
//  Created by Pedro Neves Alvarez on 7/9/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    float *cash = new float[1000];
    int students;
    double average, negdiff, posdiff, mindiff;
    
    while(scanf("%d", &students) == 1){
        
        if(students == 0)
            break;
        
        
        for(int i = 0;i<1000;i++){
            
            cash[i] = 0;
        }
        
        
        double total = 0;
        for(int i = 0;i<students;i++){
            
            double m;
            
            scanf("%lf", &m);
            
            while(m >= 10000.00){
                cout << "No one can spend more than it";
                scanf("%lf", &m);
            }
            cash[i] = m;
            total+=m;
        }
        
        average = (long)(total/students*100.0)/100.0;
        
        negdiff=0;
        posdiff=0;
        
        for(int i = 0;i<students;i++){
            
            if(cash[i]>average)
                posdiff+=(long)((cash[i]-average)*100.0)/100.0;
            else
                negdiff+=(long)((average-cash[i])*100.0)/100.0;
        }
        mindiff=0;
        
        if(posdiff>negdiff)
            mindiff=negdiff;
        else
            mindiff=posdiff;
        
        printf("%.2lf\n",mindiff);
    }
    return 0;
}


