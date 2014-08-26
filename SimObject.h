//
//  SimObject.h
//  LawOfCooling
//
//  Created by Alex Crist on 8/26/14.
//  Copyright (c) 2014 White Haven Informatics. All rights reserved.
//

#ifndef __LawOfCooling__SimObject__
#define __LawOfCooling__SimObject__

#include <iostream>

class SimObject
{
private:
    // q = mcdT
    int mass;
    int specHeatCap;
    int tempK;
    
public:
    SimObject( int mass, int specHeatCap, int tempK )
    {
        this->mass = mass;
        this->specHeatCap = specHeatCap;
        this->tempK = tempK;
    }
    
    void exchangeHeat( int qHeat )
    {
        // q = mcdT
        
    }
    
};

#endif /* defined(__LawOfCooling__SimObject__) */
