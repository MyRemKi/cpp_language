#include "ParametresTrace.h"

ParametresTrace::ParametresTrace()
{
    Setxmin(0);
    Setxmax(1);
    Setymin(0);
    Setymax(1);
    Setinc(0.1);
 
}
ParametresTrace::ParametresTrace(float xmin, float xmax, 
                                 float ymin, float ymax, float inc)
{
    if (xmin<xmax)
    {
        Setxmin(xmin);
        Setxmax(xmax);
    }
    if (ymin<ymax)
    {
        Setymin(ymin);
        Setymax(ymax);
    }
    if (inc>0)
        Setinc(inc);
}

ParametresTrace::~ParametresTrace()
{
    //dtor
}
