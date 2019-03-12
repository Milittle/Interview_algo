#pragma once
#include<math>

class power{
public:
    double Power(double base, int exponent) {
        
        if ( std::abs(base - 0.0) < 0.0000001 && exponent <= 0 )
        {
            return 0;
        }
        
        unsigned int absExp = (unsigned int)exponent;
        
        double result = PowerAbs(base, exponent);
        
        if ( exponent < 0 )
        {
            result = 1.0 / result;
        }
        
        return result;
    }
    
    double PowerAbs(double base, int exponent){
        if ( exponent == 0 )
        {
            return 1.0;
        }
        if ( exponent == 1 )
        {
            return 1;
        }
        
        double result = base;
        int tmp = exponent & 1;
        
        while(exponent / 2)
        {
            result *= result;
            exponent = exponent / 2;
        }
            
        
        if ( tmp == 1 )
        {
            result *= base;
        }
        
        return result;
    }
};