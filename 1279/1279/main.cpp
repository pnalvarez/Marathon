//
//  main.cpp
//  1279
//
//  Created by Pedro Neves Alvarez on 7/9/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//
#include <iostream>
#include <cstdio>
#include <cstring>

int main() {
    char str[3000];
    int first = 1;
    while(scanf("%s", str) == 1) {
        size_t four, odd = 0, even = 0, len = strlen(str);
         long sum = 0, five = str[len-1]-'0', i;
        sscanf(str+len-4, "%zd", &four);
        for(i = 0; i < len; i++)
            sum += str[i]-'0';
        for(i = len-1; i >= 0; i -= 2)
            odd += str[i]-'0';
        for(i = len-2; i >= 0; i -= 2)
            even += str[i]-'0';
        if(!first)
            puts("");
        first = 0;
        int flag = 0;
        if((four%4 == 0 && four%100 != 0) || four%400 == 0)
            puts("This is leap year."), flag = 1;
        if(sum%3 == 0 && five%5 == 0)
            puts("This is huluculu festival year."), flag = 1;
        if(five%5 == 0 && (odd-even)%11 == 0 && ((four%4 == 0 && four%100 != 0) || four%400 == 0))
            puts("This is bulukulu festival year."), flag = 1;
        if(!flag)
            puts("This is an ordinary year.");
    }
    return 0;
}
