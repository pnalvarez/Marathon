//
//  main.cpp
//  1340
//
//  Created by Pedro Neves Alvarez on 7/9/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(int arg, char* argv[]) {
    
    int n, a, x;
    
    while(cin >> n) {
        
        stack<int> s;
        queue<int> q;
        
        priority_queue<int> pq;
        bool iss = 1, isq = 1, ispq = 1;
        while(n--) {
            
            cin >> a >> x;
            
            if(a == 1) {
                s.push(x);
                q.push(x);
                pq.push(x);
            } else {
                
                if(s.empty() || s.top() != x) iss = 0;
                if(q.empty() || q.front() != x) isq = 0;
                if(pq.empty() || pq.top() != x) ispq = 0;
                if(!s.empty()) s.pop();
                if(!q.empty()) q.pop();
                if(!pq.empty()) pq.pop();
            }
        }
        if(iss + isq + ispq > 1)
            puts("not sure");
        else if(iss)
            puts("stack");
        else if(isq)
            puts("queue");
        else if(ispq)
            puts("priority queue");
        else
            puts("impossible");
    }
}
