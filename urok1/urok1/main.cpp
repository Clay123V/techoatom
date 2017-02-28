//
//  main.cpp
//  urok1
//
//  Created by Кирилл Кормашов on 26.02.17.
//  Copyright © 2017 Кирилл Кормашов. All rights reserved.
//

#include <iostream>
#include "stack_class.h"

using namespace std;
int main() {
    Stack s1;
    for (int i=0;i<10;i++)
        s1.push(i+10);
    cout<<s1.size()<<endl;
    for (int i=0;i<6;i++){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    return 0;
}
