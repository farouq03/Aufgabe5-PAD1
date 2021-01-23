#include "Patient.h"

Patient::Patient(string firstname, string lastname, string birthdate, Gender gender, Diagnose diagnose)
                : firstname(firstname), lastname(lastname), birthdate(birthdate), gender(gender), diagnose(diagnose){
    setDuration(diagnose);
}

void Patient::setDuration(Diagnose diagnose)
{
    if(diagnose == simulant) {
        treatmentDuration = 2;
    }
    else if (diagnose == infection) {
        treatmentDuration = 14;
    }
    else if (diagnose == fracture) {
        treatmentDuration = 6;
    }
    else {
        treatmentDuration = 0;
    }
}

void Patient::print(){
    string stringGender[] = {"Male", "Female", "Diverse"};
    string stringDiagnose[] = {"Simulant", "Infection", "Fracture", "Healed"};
    cout << "Name: " << firstname << " " << lastname << endl;
    cout << "Birthdate: " << birthdate << endl;
    cout << "Gender: " << stringGender[gender] << endl;
    cout << "Diagnose: " << stringDiagnose[diagnose] << endl;
    cout << "Treatment duration: " << treatmentDuration << endl;
}


void Patient::decreaseDuration(int duration)
{
    Patient::treatmentDuration = treatmentDuration - duration;
}


void Patient::setDiagnose(Diagnose diagnose)
{
    Patient::diagnose = diagnose;
    setDuration(diagnose);
}



