#include <iostream>
using namespace std;
void printPattern(int rows);

main()
{
    int rows;
    cout<<"Enter number of rows:";
    cin>>rows;
    printPattern( rows);
}

void printPattern(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int j= i ; j>=1 ;j-- )
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
