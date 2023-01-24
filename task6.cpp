#include <iostream>
using namespace std;

main()
{
    float integer;
    float percent1 = 0;
    float percent2 = 0;
    float  percent3 = 0;
    float count1 = 0;
    float count2 = 0;
    float count3 = 0;
    cout<<"Enter the integer:";
    cin>>integer;
    for (int count = 1; count <=integer; count++)
    {
        int number;
        cout<<"Enter a number:";
        cin>>number;
        
        if (number % 2 == 0)
        {
            count1++;
        }
        if (number % 3 == 0)
        {
            count2++;
        }
        if (number % 4 == 0)
        {
            count3++;
        }
    }
    percent1 = (count1*100)/integer;
    percent2 = (count2/integer)*100;
    percent3 = (count3/integer)*100;
    cout<<percent1<<endl;
    cout<<percent2<<endl;
    cout<<percent3<<endl;

}