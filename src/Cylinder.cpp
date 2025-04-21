# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <iomanip>
#include <cmath>
using namespace std;

double Cylinder :: SurfaceArea(){
 double pi=M_PI;
   return (2*pi*radius*radius)+2*pi*radius*height;
    
}

double Cylinder :: Volume(){
    double pi=M_PI;
    return pi*radius*radius*height;
}

double Cylinder :: Circumference(){
        double pi=M_PI;
        return 2*pi*radius;
  
}

istream &operator>>(istream & in, Cylinder & cldr)
{
     in>>cldr.radius>>cldr.height;
    return in;
}

ostream &operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << setprecision(3);
    out<<"Circumference: "<<cldr.Circumference()<<endl<<"SurfaceArea: "<<cldr.SurfaceArea()<<endl<<"Volume: "<<cldr.Volume();
    return out ;
}

# endif
