#include "ModulesOsadchiy.h"
#include <iostream>
#include <clocale>
#include <iomanip>
#include <cmath>
#include <bitset>
#include <main.h>
using namespace std;
int windbyBafort(int x)
{
setlocale(LC_ALL,"ukr");
if(x==0)
        cout<<"�������� ����:<0.3.��������������:�����."<<endl;
if(x==1)
        cout<<"�������� ����:0.3-1.5.��������������:�����."<<endl;
if(x==2)
        cout<<"�������� ����:1.6-9.4.��������������:������."<<endl;
if(x==3)
        cout<<"�������� ����:9.4-5.4.��������������:�������."<<endl;
if(x==4)
        cout<<"�������� ����:5.5-7.9.��������������:�������."<<endl;
if(x==5)
        cout<<"�������� ����:8.0-10.7.��������������:�����."<<endl;
if(x==6)
        cout<<"�������� ����:10.8-13.8.��������������:�������."<<endl;
if(x==7)
        cout<<"�������� ����:13.9-17.1.��������������:̳����."<<endl;
if(x==8)
        cout<<"�������� ����:17.2-20.7.��������������:���� �����."<<endl;
if(x==9)
        cout<<"�������� ����:20.8-24.4.��������������:�����."<<endl;
if(x==10)
        cout<<"�������� ����:24.5-28.4.��������������:������� �����."<<endl;
if(x==11)
        cout<<"�������� ����:28.5-32.6.��������������:�������� �����."<<endl;
if(x==12)
        cout<<"�������� ����:>=32.7.��������������:������(������)."<<endl;

    return 0;
}
int elnm(int n, int m)
{ setlocale(LC_ALL,"ukr");
  cout<<"n:"<<pow(n,m)<<endl;
  cout<<"m:"<<pow(m,n)<<endl;
  if(n>=m)
    cout<<"�������� ������� �� ���� ���������."<<endl;
  else{
        for(int i=n;i<=m;i++)
  {
      if(i%2!=0)
        cout<<i<<" ";
  }
  cout<<endl;
  }
  return 0;
}
int bitN(int N)
{
    bitset<16> binary(N);
    cout<<binary.to_string()<<endl;
    bool secondbit=((N>>1)&1);
    int counter=0;
    if(secondbit=0){
        counter=binary.count()-1;
        cout<<counter<<endl;
    }
    else{
        counter=binary.size()-binary.count();
        cout<<counter<<endl;
    }
    return counter;
}
