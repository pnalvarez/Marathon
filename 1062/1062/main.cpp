//
//  main.cpp
//  1062
//
//  Created by Pedro Neves Alvarez on 7/10/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

queue<int> trains;
stack<int> station;
vector<int> required_order;

int next_train(int n) {
    int train;
    
    if (!station.empty() && n == station.top()) {
        train = station.top();
        station.pop();
        return train;
    }
    
    while (!trains.empty() && n != trains.front()) {
        station.push(trains.front());
        trains.pop();
    }
    
    if (!trains.empty() && n == trains.front()) {
        train = trains.front();
        trains.pop();
        return train;
    }
    
    return 1001;
}

int main() {
    int n, t, i;
    bool valid;
    
    while (cin >> n && n) {
        while (cin >> t && t) {
            valid = true;
            
            required_order.push_back(t);
            for (i = 1; i < n; i++) {
                cin >> t;
                required_order.push_back(t);
                trains.push(i);
            }
            trains.push(n);
            
            for (i = 0; i < n; i++) {
                if (next_train(required_order[i]) == 1001) {
                    valid = false;
                    break;
                }
            }
            
            std::cout << (valid ? "Yes" : "No") << std::endl;
            
            required_order.clear();
            while (!trains.empty()) trains.pop();
            while (!station.empty()) station.pop();
        }
        
        cout << std::endl;
    }
    
    return 0;
}
