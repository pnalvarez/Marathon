//
//  main.cpp
//  1076
//
//  Created by Pedro Neves Alvarez on 7/9/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>
#include <cstdio>

int graph[49][49];
bool discovered[49];

int dfs(int vertex, int v) {
    int i, count = 0;
    
    discovered[vertex] = true;
    
    for (i = 0; i < v; i++) {
        if (graph[vertex][i] && !discovered[i]) {
            count += dfs(i, v) + 1;
        }
    }
    
    return count;
}

int main() {
    int t, n, v, a, i, j, from, to;
    
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d", &n);
        scanf("%d %d", &v, &a);
        
        for (i = 0; i < v; i++) {
            for (j = 0; j < v; j++) {
                graph[i][j] = 0;
            }
            discovered[i] = false;
        }
        
        while (a--) {
            scanf("%d %d", &from, &to);
            
            graph[from][to] = 1;
            graph[to][from] = 1;
        }
        
        printf("%d\n", dfs(n, v) * 2);
    }
    return 0;
}
