//
//  main.cpp
//  1451
//
//  Created by Pedro Neves Alvarez on 7/9/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
    
    const int MAXN=1e5+100;
    int en,cur,next[MAXN];
    char s[MAXN];
    
    cout << "Enter a problematic text";
    
    while(~scanf("%s",s+1)){
        
        unsigned long length = strlen(s+1);
        
        cur=en=0;
        
        next[0]=0;
        
        for(int i=1;i<=length;i++){
            
            if(s[i]=='[')cur=0;
            else if(s[i]==']')cur=en;
            else{
                next[i]=next[cur];
                next[cur]=i;
                if(cur==en)en=i;
                cur=i;
            }
        }
        for(int i=next[0];i!=0;i=next[i])
            cout << s[i];
        
          puts("");
    }
    return 0;
}
