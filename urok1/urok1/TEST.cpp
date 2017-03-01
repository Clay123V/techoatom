//--------------------------------------
//!@file stack_class.h
//!@brief Implements a stack class
//!@author KirillKormashov, 2017
//--------------------------------------


#include <iostream>
using namespace std;
#include "stack_class.h"

#define TEST(what,case) printf("\nObject: " #what "    test: "#case"\n")

#define ASSERT_EQ(p,eq)\
if(!p){\
assert(!"Object passed the "#eq" test");\
}\
else{\
cout<<"Object passed the "#eq " test\n";\
}


int main() {
    TEST(Stack,EmptyStack);
    {
        Stack s;
        ASSERT_EQ(s.empty()==1,EmptyStack);
        ASSERT_EQ((s.size()==0),SizeCheck);
        s.push(2);
        ASSERT_EQ((s.size()==1),SizeCheck);
        ASSERT_EQ(s.pop(),PopElStack);
        ASSERT_EQ((s.size()==0),SizeCheck);
    }
}
