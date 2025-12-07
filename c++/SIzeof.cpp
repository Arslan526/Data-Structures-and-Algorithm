#include<iostream>
using namespace std;
int main(){
    int a = 39;
    float b = 90.9;
    double c = 90.696;
    char d  = 'A';
    unsigned short int e = 123;
    unsigned int f  = 90;
    long int g  = 78;
    unsigned long int h  = 923;
    long long int i = 890;
    long double j = 89813;
    bool k = true;

    int size1 = sizeof(a) ;
    float size2  = sizeof(b);
    double size3 = sizeof(c);
    char size4 = sizeof(d);
    unsigned short int size5 = sizeof(e);
    unsigned int size6 = sizeof(f);
    long int size7 = sizeof(g);
     unsigned long int size8 = sizeof(h);
    long long int size9 = sizeof(i);
    long double size10 = sizeof( j);
    bool size11 = sizeof(k);
    
     cout<<" Size of int                 : "<< size1 <<" bytes "<<endl;
     cout<<" Size of float               : "<< size2 <<" bytes "<<endl;
     cout<<" Size of double              : "<< size3 <<" bytes "<< endl;
     cout<<" Size of char                : "<< size4 <<" bytes "<< endl;
     cout<<" Size of  unsigned short int : "<< size5 <<" bytes "<< endl;
     cout<<" Size of unsigned  int       : "<< size6 <<" bytes "<< endl;
     cout<<" Size of long int            : "<< size7 <<" bytes "<< endl;
     cout<<" Size of unsigned long int   : "<< size8 <<" bytes "<< endl;
     cout<<" Size of long long int       : "<< size9 <<" bytes "<< endl;
     cout<<" Size of long bouble         : "<< size10 <<" bytes "<< endl;
     cout<<" Size of long bolean         : "<< size11 <<" bytes "<< endl;
   return 0;
}