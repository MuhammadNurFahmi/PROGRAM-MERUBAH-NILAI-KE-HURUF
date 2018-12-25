#include <iostream>
using namespace std;

int main()
{
 int y;
 cout<<"Masukkan Nilai = ";
 cin>>y;
 if(y>=80 && y==100)
 cout<<"A";
 else
     if(y>=65 && y<=79)
       cout<<"B";
     else
         if(y>=55 && y<=64)
           cout<<"C";
         else
             if(y>=40 && y<=54)
               cout<<"D";
             else
                if(y>=39 && y<=0)
				cout<<"E";
                
 
 return 0;
}
