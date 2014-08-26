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
    
    void exchangeHeat( double qHeat )
    {
        cout << endl;
        // q = mcdT, but only T changes
        // ergo, dT = q/(mc)
        if( qHeat == 0 )
            return;
        
        tempK += qHeat / ( mass * specHeatCap);
        if( tempK < 0 )
            tempK = 0;
        
        cout << "qHeat = ";
        if( qHeat > 0 )
            cout << "+";
        cout << qHeat << "J" << endl;
        cout << "tempK of " << Label << " is now " << tempK << endl;
    }
    
    void dumpdown()
    {
        cout << "Label       = " << Label << endl;
        cout << "Mass        = " << mass << endl;
        cout << "specHeatCap = " << specHeatCap << endl;
        cout << "tempK       = " << tempK << endl;
    }
    
};

#endif /* defined(__LawOfCooling__SimObject__) */
