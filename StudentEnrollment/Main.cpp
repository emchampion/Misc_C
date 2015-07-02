//
//  Main.cpp
//  classes
//
//  Created by Eric Champion on 7/20/13.
//  Copyright (c) 2013 Eric Champion. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "C_Add.h"
#include "C_Date.h"
#include "C_Stu.h"
using namespace std;

void data();

int main()
{
    C_Stu students[55];
    data();
    
}

void data()
{
    char buffer[100];
    ifstream myFile;
    myFile.open("hosd.txt");
    if (myFile.is_open())
    {
        while ( myFile.good() )
        {
            myFile.get (buffer,30,',');
            cout << buffer;
        }
        myFile.close();
    }
    else cout << "Unable to open file";
}