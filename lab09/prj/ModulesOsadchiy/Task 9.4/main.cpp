#include <iostream>
#include <ModulesOsadchiy.h>
#include <main.h>
using namespace std;
void mainmenu(){
    int first,second,third;
    char action;
    cout<<"Enter your action"<<endl;
    cin>>action;
    if(action=='u')
    {  cout<<"Enter your x:"<<endl;
       cin>>first;
       cout<<"Enter your y:"<<endl;
       cin>>second;
       cout<<"Enter your z:"<<endl;
       cin>>third;
       cout<<s_calculation(first,second,third)<<endl;
    }
    if(action=='o')
    {
         cout<<"Enter your number:"<<endl;
         cin>>first;
         windbyBafort(first);

    }
    if(action=='p')
    {
        cout<<"Enter your n:"<<endl;
        cin>>first;
        cout<<"Enter your m:"<<endl;
        cin>>second;
        elnm(first, second);
    }
    if(action=='a')
    {
        cout<<"Enter your N:"<<endl;
        cin>>first;
        bitN(first);
    }
    else{
        cout<<"\a"<<endl;
        cout<<"Enter new action: "<<endl;
        cin>>action;
        if(action=='s'||action=='S')
        {
            exit(0);
        }
        else{
            mainmenu();
        }
    }
}
int main()
{   mainmenu();
    return 0;
}
