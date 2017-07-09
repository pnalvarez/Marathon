//
//  main.cpp
//  1256
//
//  Created by Pedro Neves Alvarez on 7/8/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//


#include <iostream>
#include <vector>

using namespace std;


int main(int argc, const char * argv[]) {

    int tests,cut,tam,n;
    
    cout << "Enter the test cases";
    cin >> tests;
    
    for(int i = 0; i<tests;i++){
        
        if(i)
            cout << endl;
        
        cin >> cut >> tam;
        
        vector<int> hashv[cut];
        vector<int>::iterator iter;
        
        for(int j=0;j<tam;j++){
            cin>>n;
            hashv[n%cut].push_back(n);
        }
        
        for(int j=0;j<cut;j++){
            
            cout<<j;
            
            for(iter=hashv[j].begin();iter!=hashv[j].end();iter++){
                cout << " -> " << *iter;
            }
            cout << " -> \\" << endl;
        }
        
    }

    
    return 0;
}













