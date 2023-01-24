#include <iostream>
using namespace std;

main()
{
    float  cargo;
    float minibus;
    float truck;
    float train;
    float tons;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int total;
    float p1 = 0;
    float p2 = 0;
    float p3 = 0;
    float average;
    cout<<"Enter number of cargos:";
    cin>>cargo;
    for (int count = 1 ; count <= cargo; count++)
    {
        
        cout<<"Enter tons of a cargo:";
        cin>>tons;
        if (tons >=1 && tons <=3)
        {
            count1 = count1 + tons;
            minibus = count1 * 200;
        }
        else if (tons > 3 && tons <= 11)
        {
            count2 = count2 + tons;  
            truck = count2 * 175; 
        }
        else if (tons >11)
        {
            count3 = count3 + tons;
            train = count3 * 120;
        }
        
    }
    
    total = count1 + count2 +  count3;
    cout<<"total"<<total<<endl;
    p1 = (count1*100)/ total;
    p2 = (count2*100)/total;
    p3 = (count3*100)/total;
    average = (minibus + truck + train)/ total;
    cout<<average<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<p3<<endl;




}