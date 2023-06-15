#include <iostream>
using namespace std;
int main()
{
    int age;
    char gender;
    cout<<"ENTER YOUR AGE";
    cin>>age;
    cout<<"ENTER YOUR GENDER(f)";
    cin>>gender;

    if (age>=18 || gender=='f')
        cout<<"SHE CAN VOTE";
    else
        cout<<"YOU CANNOT VOTE";
    return 0;
}
