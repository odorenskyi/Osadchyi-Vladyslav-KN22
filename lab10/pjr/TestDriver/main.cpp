#include <iostream>
#include <main.h>
#include <string>
using namespace std;

int main()
{  std::string file,file2,file3,file4;
   cin>>file;
   cin>>file2;
   cin>>file3;
   cin>>file4;
   task10_1(file);
   task10_1_2(file2);
   task10_1_3(file3);
   task10_2(file4);
   double x,y,z;
   int b;
   cin>>x;
   cin>>y;
   cin>>z;
   cin>>b;
   cout<<task10_3(x,y,z,b)<<endl;
    return 0;
}
