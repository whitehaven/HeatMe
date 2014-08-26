//
//  main.cpp
//  LawOfCooling
//
//  Created by Alex Crist on 8/26/14.
//  Copyright (c) 2014 White Haven Informatics. All rights reserved.
//

#include <iostream>

#include "SimObject.h"

using namespace std;

int main(int argc, const char * argv[])
{
    SimObject Block1( 10, 10, 100, "Block1" );
    SimObject Block2( 10, 10, 100, "Block2");

    double qHeat = 1500;
    
    Block1.exchangeHeat( qHeat );
    Block2.exchangeHeat( -qHeat );
    
    Block1.dumpdown();
    Block2.dumpdown();
    
    return 0;
}

