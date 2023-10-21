#ifndef TEMP_CONVERTER_
#define TEMP_CONVERTER_
#include <iostream>
#include <cstring>
#define LOWER 10
#define UPPER 20
#define STEPS 3

class Convert
{
    public:
        Convert(void);
        Convert(double value);
        Convert(int steps, int upperlimit, int lowerlimit);
        ~Convert();

        //calculate the number of cycles used in the for loop
        int iterations(int lowerlimit, int upperlimit, int steps);

        double farenheight(double value);

        double celcius(double value);
        
    private:
        int lowerlimit;
        int upperlimit;
        int cycles;
        int steps;
        double value;

};

#endif