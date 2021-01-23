#ifndef KRANKENHAUS_H
#define KRANKENHAUS_H

#include <iostream>

using namespace std;

class Krankenhaus
{
private:
    int numofBed;
    int numofPatient;

public:
    Krankenhaus(int numofBed, int numofPatient);
    Krankenhaus(int patient);
    void timeSimulation(int& day);
    int getNumofPatient();
    void setNumofBed(int num);
    int getNumofBed(){
        return numofBed;
    }
};

#endif // KRANKENHAUS_H
