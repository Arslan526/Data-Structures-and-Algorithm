
// Phase Two star 
#include<iostream>
using namespace std; 
int main(){
    int num = 4;
    cout<<"The values "<< num <<endl;
    cout<<"Address of number "<< &num << endl;
//     // pointer
    int *ptr = &num;
    cout<<"Address of pointer "<< ptr << endl;
    cout<<"The values of pointer "<< *ptr << endl;

    double n = 9;
    double *p2 = &n;
    cout<<"Address of double pointer "<< p2 << endl;
    cout<<"The vaues of double pointer "<< *p2 << endl;

    
    char ch  = 'A';
    char *A = &ch;
    cout<<"Address of character pointer "<< A << endl;
    cout<<"The value of character pointer "<< *A << endl;


    cout<<"Size of interger pointer "<< sizeof(*ptr)<< endl;
    cout<<"Size of double pointer "<< sizeof(p2)<< endl;
    cout<<"Size of character pointer "<< sizeof(A)<< endl;
    
//     int i = 5;
//     int *p = &i;
//     cout<< p << endl;
//     cout<< * p << endl;

    int  num1 = 90;
    int a = num1;
    cout<<"a before "<< num1 << endl;
    a++;
    cout<<"a After "<< num1 << endl;

    int *D = &num1;
    cout<<"D before "<< num1 << endl;
    (*D)++;
    cout<<"D After "<< num1 << endl;

//     // copy pointer
//     int * Q = D;
//     cout<<"Address of copy pointer "<< endl;
//     cout<< D << " " << Q << endl;
//     cout<<"The values of copy pointer "<< endl;
//     cout<< *D << " " << *Q << endl;


    int i1= 88;
    int *t = &i1;
    cout<<"Before Address "<< t << endl;
    cout<< *t <<endl;
    cout<<"====="<<endl;
    cout<< (*t)++ << endl;
    cout<<"===="<<endl;
    cout<<*t<<endl;
    *t = *t + 1;
    cout<<"====="<<endl;
    cout<< *t <<endl;
    // Address mai 4 bytes aaga bada diga 
    t = t + 1;
    cout<< t << endl;
   cout<<"After Address "<< t << endl;
   return 0;
}