//
//  main.cpp
//  1191
//
//  Created by Pedro Neves Alvarez on 7/10/17.
//  Copyright © 2017 Pedro Neves Alvarez. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void postorder_print_from_preorder_inorder(string pre, string in) {
    long in_root_index = in.find(pre[0]);
    
    if (in.substr(0, in_root_index).length() > 0) {
        postorder_print_from_preorder_inorder(
                                              pre.substr(1),
                                              in.substr(0, in_root_index));
    }
    if (in.substr(in_root_index + 1).length() > 0) {
        postorder_print_from_preorder_inorder(
                                              pre.substr(in_root_index + 1),
                                              in.substr(in_root_index + 1));
    }
    
    cout << pre[0];
}

int main() {
    std::string pre, in;
    
    while (cin >> pre >> in) {
        postorder_print_from_preorder_inorder(pre, in);
        cout << endl;
    }
    
    return 0;
}
