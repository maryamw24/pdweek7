#include <iostream>
using namespace std;

main()
{
    int period;
    int treatedPatients = 0;
    int unTreatedPatients = 0;
    int doctors = 7;
    int result1 = 0;
    int result2 = 0;
    cout<<"Enter time period:";
    cin>>period;
    for (int day = 1; day <= period; day++)
    {
        int patients;
        cout<<"enter patients:";
        cin>>patients;
        unTreatedPatients = patients - doctors;
        treatedPatients = patients - unTreatedPatients;
        if (day % 3 == 0  && unTreatedPatients> treatedPatients)
        {
            doctors++;
        }
        if (patients > doctors)
        {
            treatedPatients = doctors;
            unTreatedPatients = patients - doctors;
            result1 = treatedPatients + result1;
            result2 = unTreatedPatients + result2;

        }
        else
        {
            treatedPatients = patients;
            unTreatedPatients = 0;
            result1 = treatedPatients + result1;
            result2 = unTreatedPatients + result2;
        }

    }
    cout<<result1<<endl;
    cout<<result2<<endl;
}