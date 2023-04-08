#include <iostream>
#include <ModulesOsadchiy.h>
using namespace std;
void testdriver(void){
int test1=bitN(1);
    if(test1==15)
        cout<<"Test 1 is correct"<<endl;
int test2=bitN(2);
    if(test2==15)
        cout<<"Test 2 is correct"<<endl;
int test3=bitN(3);
    if(test3==14)
        cout<<"Test 3 is correct"<<endl;
int test4=bitN(4);
    if(test4==15)
        cout<<"Test 4 is correct"<<endl;
int test5=bitN(5);
    if(test5==14)
        cout<<"Test 5 is correct"<<endl;
int test6=bitN(40);
    if(test5==14)
        cout<<"Test 6 is correct"<<endl;
int test7=bitN(57);
    if(test7==12)
        cout<<"Test 7 is correct"<<endl;
int test8=bitN(200);
    if(test8==13)
        cout<<"Test 8 is correct"<<endl;
int test9=bitN(356);
    if(test9==12)
        cout<<"Test 9 is correct"<<endl;
int test10=bitN(8000);
    if(test10==10)
        cout<<"Test 10 is correct"<<endl;
    }


int main()
{   testdriver();

    return 0;
}
