//
//  main.cpp
//  1222
//
//  Created by Pedro Neves Alvarez on 7/10/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>
#include <string>

int main() {
    unsigned long c, characters;
    int n, l, lines;
    std::string word;
    
    while (std::cin >> n >> l >> c) {
        lines = 1;
        characters = 0;
        
        while (n--) {
            std::cin >> word;
            if (characters + word.length() <= c) {
                characters += word.length() + 1;
            } else {
                characters = word.length() + 1;
                lines++;
            }
        }
        
        if (lines % l != 0) {
            std::cout << lines / l + 1 << std::endl;
        } else {
            std::cout << lines / l << std::endl;
        }
    }
    return 0;
}
