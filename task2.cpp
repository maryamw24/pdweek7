#include <iostream>
using namespace std;

main()
{
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for (int i = 1 ; i <=n ; i++)
    {
        for (int a = n-i; a >=1 ; a--)
        {
            cout<<" ";
        }
        for (int b = 1; b <=i; b++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 1 ; i <=n ; i++)
    {
        for (int a = 1; a <=i ; a++)
        {
            cout<<" ";
        }
        for (int b = n-i; b >=1 ; b--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}


