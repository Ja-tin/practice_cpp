#include<iostream>
using namespace std;
int main()
{
  const int len=5;
  int arr[len];

  for(int i=0;i<len;i++)
  {
      cin>>arr[i];
  }

  int esum=0;
  for(int i=0;i<len;i++)
  {
      if (arr[i]%2==0)
      {
          esum=esum+arr[i];
      }

  }
  cout<<esum<<endl;

}

