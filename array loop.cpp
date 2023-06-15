#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int n, i;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the elements in the array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

return 0;

}
