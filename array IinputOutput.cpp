#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number till which you want array:";
    cin>>n;
    int a[10];

    for(int i=0;i<n;i++)
        {cin>>a[i];}

    cout<<"Entered Array:--"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
