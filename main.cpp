#include "Patient.h"
#include "Krankenhaus.h"


int main()
{
    cout << endl;

    Patient patient1("Thomas", "Keller", "19.09.1999", Patient::female);
    patient1.print();
    patient1.decreaseDuration(1);
    cout << endl;
    patient1.print();
    patient1.setDiagnose(Patient::infection);
    cout << endl;
    patient1.print();

    cout << endl;

    return 0;
}
