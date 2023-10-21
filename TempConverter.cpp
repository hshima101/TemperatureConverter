#include <iostream>
#include "TempConverter.h"

//default class for testing
Convert::Convert(void)
{
    double temperature = 25;
    std::cout<<"Object constructed"<<std::endl;
    farenheight(temperature);
    celcius(temperature);    
}

Convert::Convert(double value)
{
    int move = LOWER - 3;
    double temperature = value;
    std::cout<<"Object constructed"<<std::endl;
    farenheight(temperature);
    celcius(temperature); 
    iterations(LOWER, UPPER, STEPS);
    for(int i = 0; i < iterations(LOWER, UPPER, STEPS); i++)
    {
        move = move + STEPS;
        farenheight(move);
        celcius(move);
        
    }
}

//work on the iterations functions to finish the problem
Convert::Convert(int steps, int upperlimit, int lowerlimit)
{
    iterations(upperlimit, lowerlimit, STEPS);
}

Convert::~Convert(void)
{
    std::cout<<"Object Destroyed"<<std::endl;
}

int Convert::iterations(int lowerlimit, int upperlimit, int steps)
{
    int modulo;
    int newlimit;
    
    newlimit = upperlimit - lowerlimit;
    //std::cout<<"NewLimit: " << newlimit <<std::endl;
    modulo = newlimit % steps;
    //std::cout<<"Modulo: " << modulo <<std::endl;
    newlimit = newlimit - modulo;
    //std::cout<<"NewLimit2: " << newlimit <<std::endl;
    cycles = newlimit/steps;
    //std::cout<<"Cycles: "<< cycles <<std::endl;
    //std::cout<<"Number of cycles is "<<cycles<<std::endl;
    return cycles;
}

double Convert::farenheight(double value)
{
    value = value * 9 / 5 + 32;
    std::cout<<"Farenheight:"<<std::endl;
    std::cout<<value<<std::endl;
    return value;
}

double Convert::celcius(double value)
{
    if(value < 32)
    {
        value = (32 - value) * 5/9;
        std::cout<<"Celcius:"<<std::endl;
        std::cout<<"-"<<value<<std::endl;
    }
    
    else if(value > 32.0) {
        value = (value - 32) * 5/9;
        std::cout<<"Celcius:"<<std::endl;
        std::cout<<value<<std::endl;
    }
    return value;
}