#include "Krankenhaus.h"

Krankenhaus::Krankenhaus(int numofBed, int numofPatient)
{
    Krankenhaus::numofBed = numofBed;
    Krankenhaus::numofPatient = numofPatient;
}

Krankenhaus::Krankenhaus(int patient)
{
    if(numofBed > 0){
        numofPatient += patient;
        numofBed -= patient;
    }
    else {
        cout << "Beds are full" << endl;
    }
}


void Krankenhaus::setNumofBed(int num)
{
    numofBed = num;
}
