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
        cout<<"Швидкість вітру:<0.3.Характеристика:Штиль."<<endl;
if(x==1)
        cout<<"Швидкість вітру:0.3-1.5.Характеристика:Тихий."<<endl;
if(x==2)
        cout<<"Швидкість вітру:1.6-9.4.Характеристика:Легкий."<<endl;
if(x==3)
        cout<<"Швидкість вітру:9.4-5.4.Характеристика:Слабкий."<<endl;
if(x==4)
        cout<<"Швидкість вітру:5.5-7.9.Характеристика:Помірний."<<endl;
if(x==5)
        cout<<"Швидкість вітру:8.0-10.7.Характеристика:Свіжий."<<endl;
if(x==6)
        cout<<"Швидкість вітру:10.8-13.8.Характеристика:Сильний."<<endl;
if(x==7)
        cout<<"Швидкість вітру:13.9-17.1.Характеристика:Міцний."<<endl;
if(x==8)
        cout<<"Швидкість вітру:17.2-20.7.Характеристика:Дуже міцний."<<endl;
if(x==9)
        cout<<"Швидкість вітру:20.8-24.4.Характеристика:Шторм."<<endl;
if(x==10)
        cout<<"Швидкість вітру:24.5-28.4.Характеристика:Сильний шторм."<<endl;
if(x==11)
        cout<<"Швидкість вітру:28.5-32.6.Характеристика:Квальний шторм."<<endl;
if(x==12)
        cout<<"Швидкість вітру:>=32.7.Характеристика:Ураган(буревій)."<<endl;

    return 0;
}
int elnm(int n, int m)
{ setlocale(LC_ALL,"ukr");
  cout<<"n:"<<pow(n,m)<<endl;
  cout<<"m:"<<pow(m,n)<<endl;
  if(n>=m)
    cout<<"Наступна функція не буде працювати."<<endl;
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
