#include <iostream>
using namespace std;
void amplify(int number);

main()
{
    int number;
    cout<<"Enter number:";
    cin>>number;
    amplify( number);

}

void amplify(int number)
{
    for (int count = 1; count <=number; count++)
    {
        int result = count;
        if (count%4 ==0)
        {
            result = count *10;
        }
        cout<<result<<",";

    }
}