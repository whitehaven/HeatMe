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
#include <string>

using namespace std;

class SimObject
{
private:
    // q = mcdT
    double mass;
    double specHeatCap;
    double tempK;
    string Label;
    
public:
    SimObject( int mass, int specHeatCap, int tempK, string Label )
    {
        this->mass = mass;
        this->specHeatCap = specHeatCap;
        this->tempK = tempK;
        this->Label = Label;
    }
    
    void exchangeHeat( int qHeat )
    {
        // q = mcdT, but only T changes
        // ergo, dT = q/(mc)
        if( qHeat == 0 )
            return;
        qHeat > 0 ? cout << "Heating " : cout << "Cooling ";
        cout << "by " << qHeat << "J" << endl;
        tempK += qHeat / ( mass * specHeatCap);
        cout << "TempK of " << Label << " is now " << tempK << endl;
    }
    
    void dumpdown()
    {
        cout << "Lable =       " << Label << endl;
        cout << "Mass =        " << mass << endl;
        cout << "specHeatCap = " << specHeatCap << endl;
        cout << "tempK =       " << tempK << endl;
    }
    
};

#endif /* defined(__LawOfCooling__SimObject__) */
