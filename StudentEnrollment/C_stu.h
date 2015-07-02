//
//  C_stu.h
//  classes
//
//  Created by Eric Champion on 7/20/13.
//  Copyright (c) 2013 Eric Champion. All rights reserved.
//

#ifndef C_Stu_H
#define C_Stu_H

#include <iostream>
class C_Stu{
    char last[15],
    first[15];
    int gpa,
    credits;
    C_Add homeaddress;
    C_Date dob;
    C_Date completion;
public:
    void store();
    void print();
}

#endif /* defined(____class__) */
