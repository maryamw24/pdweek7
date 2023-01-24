#include <iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter number:";
    cin>>number;
    int result = 0;
    for (int count = 1 ; count <= number; count++)
    {
        result = result + count;
    }
    cout << result;
}