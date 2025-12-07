#include<iostream>
using namespace std;
int main()
{
  /* int n ;
   cout<<"Enter  a number : ";
   cin>> n;
  int i = 1;
  while(i !=n){
    if(n%2==0){
      cout<<"Even number "<< endl;
    }
    else{
      cout<<"Odd number "<< endl;
      
    }
    i++;
}

int n;
cout<<"Enter a number : ";
cin>> n;
cout<<"printing a conting from 1 to n "<< endl;
for(int i = 1 ; i <=n;i++ ){
  cout<< i << " ";
}


int n;
cout<<"Enter a number : ";
cin>> n;
 int i = 1;
 for(; i <= n;i++){       // not a error
  cout<< i << " ";
 }
 
 int n;
cout<<"Enter a number : ";
cin>> n;
int i = 1;                   
for( ; ; ){
  if(i<=n){
    cout<< i <<" ";
  }
  
  i++;
}

int n;
cout<<"Enter a number : ";
cin>> n;
int i = 1;                   // ye infint tak chal jyga isi pata nahi kab rokh na ho
for( ; ; ){
  if(i<=n){
    cout<< i <<" ";
  }
  else {
    break;
  }
  i++;
}

  for(int a = 0 , b = 1 , c = 2; a>= 0 && b>= 1 && c>= 2 ; a-- , b-- , c--){
    cout<< a <<" "<< b <<" "<< c << endl; 
  }
  
    // printing  1 to N sum
    int n;
    cin>>n;
    int sum = 0;
    for(int i =1 ; i<= n;i++){
    sum+= i;

    }
    cout<<"Sum of "<< sum << endl;
    
    // PRINTING FIBONNACI NUMBER 
    int n ;
    cin>> n;
    int a = 0;
    int b = 1;
    cout<< a <<" "<< b << " ";
    for(int i = 1 ; i<=n;i++){
      int fib = a + b;
      cout<< fib << " ";
      a = b;
      b = fib;

    }
    */
    
    // PRINT IF PRIME AND NOT A PRIME NUMBER 
    int n;
    cin>>n;
    bool isprime = 1;
    for(int i = 1; i<=n;i++){
      // rem = 0 not prime number 
      if(n%i == 0)
       // cout<< " Not a prime number " << endl;
      isprime =0;
      break ;
    }
    if(isprime == 0){
      cout<<"Not a prime number "<< endl;
    }
    else{
      cout<< "Prime number "<< endl;
    }
    
    

   
}