#include<iostream>
using namespace std;
int main()
{
    int cr_num,guess_number;
    cout<<"CREATED NUMBER IS:";
    cin>>cr_num;
    cout<<"asks the user to guess is:";
    cin>>guess_number;
    if(cr_num<guess_number)
    {
        cout<<"guess_number is too high";
    }
    else if(cr_num>guess_number)
    {
        cout<<"guess_number is too low";
        
    }
    else
    {
        cout<<"cr_num and guess_number is same";
    }
}
