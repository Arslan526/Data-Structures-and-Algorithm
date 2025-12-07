#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter nnumber "<<endl;
    cin>>num;
    int fact = 1;
    int sum = 0;

    for(int i =1;i<num;i++){
        fact = fact * i;

    }

    sum += fact;

    if(sum == num){
        cout<<"Perfect number"<<endl;
    }
    else{
        cout<<"Not a Perfect number"<<endl;
    }

    // int num;
    // cin>> num;
    // int sum = 0;
    
    // while(num > 0){
    //     int lastdigit = num%10;
    //     sum = sum + (lastdigit *  lastdigit*lastdigit);
    //     num = num/10;
    // }

    // if(sum == num){
    //     cout<<"It is astromg number"<<endl;
    // }
    // else{
    //     cout<<"It is not Astrong number"<<endl;
    // }
    // int rev  = 0;
    // int n =  121;
    // int temp = n;
    
    // while(temp > 0){
    //     int digit = temp %10;
    //     rev =  rev * 10+ digit;
        
    //     temp =  temp/10;
    // }
    // cout<<"Reverse number "<<rev<<endl;

    // if(rev == n){
    //     cout<<"Palindrome number"<<endl;
    // }
    // else{
    //     cout<<"Not a palindrome number"<<endl;
    // }



   // int a = 5;

   // if(a = 8){
   //    cout<<"raj"<<endl;
   // }
   // else{
   //    cout<<"Kishore"<<endl;
   // }

   // cout<< a;
   //int a = 10 , b = 20, c =30;

   // if(a < b){
   //    if(b < c){
   //       cout<<"b is smal"<<endl;
   //    }
   //    else{
   //       cout<<"c is small"<<endl;
   //    }
      
   // }
   // else {
   //    if(a < c){
   //       cout<<"a is small"<<endl;
   //    }
   //    else{
   //       cout<<"c is  smal"<<endl;
         
   //    }
   // }
   // int i =0;
   // while(i < 5){
   //    if(i == 3 ){
   //       continue;
   //       //break;
   //    }
   //    cout<< i <<" ";
   //    i++;
   // }

   // for(int i =0; i<10;i++){
   //    if(i %2 == 0){
   //       cout<<"Even"<<i<<" ";
   //    }else if(i % 3 == 0 ){
   //       cout<<"Multiple of 3 "<< i <<" ";
   //    }
   //    else{
   //       cout<<"Odd" << i<<" ";
   //    }
   // }

   //cout<<(121/10);

}