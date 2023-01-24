#include <iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j=1 ; j<=i ;j++)
        {
            cout<<"*";
        }
        for (int k = 2*n-(2*i); k>=2 ; k = k-2)
        {
            cout<<"  ";
        }
        for (int b = 1; b <=i; b++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}