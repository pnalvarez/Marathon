//
//  main.cpp
//  1081
//
//  Created by Pedro Neves Alvarez on 7/9/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>

#define MAX 20

using namespace std;

bool disc[MAX];
int graph[MAX][MAX];

void clean(int v){
    
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            graph[i][j] = 0;
        }
        disc[i]=false;
    }
    
}

bool dfs(int v, int n, int s){
    
    bool path = false;
    disc[v]=true;
    
    for(int i=0;i<n;i++){
        
        if(graph[v][i]==1){
            
            path=true;
            
            if(!disc[i]){
                
                cout << string(s,' ');
                printf("%d-%d pathR(G,%d)\n",v,i,i);
                dfs(i,n,s+2);
            }else{
                
                cout << string(s,' ');
                printf("%d-%d\n",v,i);
            }
                
        }
    }
    return path;
}

void dfs_runner(int v){
    
    int ind=0;
    
    while(true){
        
        
        if(dfs(ind,v,2))
            puts("");
        
        ind=-1;
        
        for(int i=0;i<v;i++){
            
            if(!disc[i]){
                ind=i;
                break;
            }
        }
        if(ind==-1)
            break;
    }
}

int main(int argc, const char * argv[]) {
   
    int n,v,e,o,d,c=1;
    
    cin >> n;
    
    while(n--){
        
        
        cin >> v >> e;
        clean(v);
        
        while(e--){
            
            cin >> o >> d;
            graph[o][d]=1;
            
        }
        
        printf("Caso %d\n:",c++);
        dfs_runner(v);
    }
    
    return 0;
}
