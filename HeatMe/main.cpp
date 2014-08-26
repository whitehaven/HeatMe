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
    SimObject Block( 10, 10, 100, "Block" );
    
    Block.dumpdown();

    
    Block.exchangeHeat( 15 );
    
    return 0;
}

