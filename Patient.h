#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include <iostream>

using namespace std;

class Patient
{
public:
    enum Diagnose {simulant, infection, fracture, healed};
    enum Gender {male, female, diverse};

private:

    const string firstname, lastname;
    const string birthdate;
    const Gender gender;
    Diagnose diagnose;
    int treatmentDuration;

public:
    Patient(string firstname, string lastname, string birthdate, Gender gender, Diagnose diagnose = simulant);
    int duration(Diagnose diagnose);
    void print();
    void decreaseDuration(int duration);
    void setDiagnose(Diagnose diagnose);
    void setDuration(Diagnose diagnose);
    int getTreatmentDuration(){
        return treatmentDuration;
    }

};

#endif // PATIENT_H
