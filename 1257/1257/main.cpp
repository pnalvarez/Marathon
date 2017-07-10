//
//  main.cpp
//  1257
//
//  Created by Pedro Neves Alvarez on 7/10/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>

int main(){
    int n, i, j, l, k;
    char linha[51];
    int total;
    
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d%*c",&l);
        total = 0;
        for(j = 0; j < l; j++){
            scanf("%[^\n]%*c",&linha);
            for(k = 0; linha[k] != '\0'; k++){
                total += linha[k] - 65 + j + k;
            }
        }
        printf("%d\n", total);
    }
    return 0;
}
