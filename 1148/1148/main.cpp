//
//  main.cpp
//  1148
//
//  Created by Pedro Neves Alvarez on 7/9/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>
#include "stdio.h"
#include <string.h>
#define INF 0x3F3F3F3F
#define MAX 501
using namespace std;

int g[510][510];
int dist[510];
bool visit[510];
int pred[MAX];

void dijkstra(int ordem, int s){
    int p[ordem];
    int t = -1;
    int v;
    
    for (int i = 0; i <= ordem; i++)
        dist[i] = INF;
    
    dist[s] = 0;
    p[++t] = s;
    
    while(t != -1){
        v = p[t--];
        for (int i = 1; i <= ordem; i++){
            if(dist[i] > dist[v] + g[v][i]){
                dist[i] = dist[v] + g[v][i];
                p[++t] = i;
            }
        }
    }
}

void dijkstra2 (int n,int p){
    int v,c;
    
    memset (dist, INF, sizeof(dist));
    memset (visit, 0, sizeof(visit));
    memset (pred, -1, sizeof(pred));
    
    dist[p] = 0;
    v = p;
    
    while (!visit[v]){
        visit[v] = true;
        for (int i=1; i<=n; i++){
            if (g[v][i] != INF){
                c = g[v][i];
                if (dist[i] > dist[v]+c){
                    dist[i] = dist[v]+c;
                    pred[i] = v;
                }
            }
        }
        v = 0;
        c = INF;
        for (int i=1; i<=n; i++){
            if(visit[i] == false && c>dist[i]){
                c=dist[i];
                v=i;
            }
        }
    }
}

int main(){
    
    int n,e,x,y,h,k,o,d;
    
    while(1){
        
        cin >> n >> e;
        
        if(n == 0 && e == 0) break;
        
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= n; j++)
                g[i][j] = INF;
        
        while(e--){
            cin >> x >> y >> h;
            g[x][y] = h;
        }
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if(g[i][j] != INF && g[j][i] != INF){
                    g[i][j] = 0;
                    g[j][i] = 0;
                }
            }
        }
        
        cin >> k;
        
        while(k--){
            cin >> o >> d;
            dijkstra2(n,o);
            
            if(dist[d] < INF)
                cout << dist[d] << endl;
            else
                cout << "Nao e possivel entregar a carta" << endl;
        }
        
        cout << endl;
    }
}
