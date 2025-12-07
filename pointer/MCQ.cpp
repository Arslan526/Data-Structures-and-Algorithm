#include<iostream>
using namespace std;
void  update(int *p){
    *p = (*p) * 2;

}


void fun(int arr[] ){
    cout<< arr[0] << " ";
}

void update(int*p){
    int a =70;
    p = &a;
    *p = (*p) * (*p);
    cout<< *p << " "; // 4900


}

  void increment(int**p){
    ++(**p);
  }

void Q(int z){
    z += z;
    cout<< z << " ";

}
void P(int *y){
    int x = *y +2;
    Q(x);
    *y = x -1;
    cout<< x << endl;
}

int main(){

    int x = 5;
    P(&x);
    cout<< x << endl;

    int  num =110;
    int *ptr = &num;
    increment(&ptr);
    cout<< num << endl;

    int arr[] = {11 , 19, 13 ,14 , 15 ,16 };
    fun(arr + 1);
    cout<< arr[0] << endl;


    int a =70;
    update(&a);
    cout<< a << endl;
    



    int num1 = 8;
    int num2 = 18;
    int *ptr = &num2;
    *ptr = 9;
    cout<< num1 << " "<< num2 << endl;


    int num1 = 6;
    int *ptr = &num1;
    int *q = ptr; // copy kar diya  hi
    (*q)++;
    cout << num1 << endl;
    

    int num = 0;
    int num1 = 110;
    *num = num1;
    cout<< *num << endl;
    

    int first = 8;
    int sec = 11;
    int *thirld = &sec;
    first = *thirld;
    *thirld = *thirld + 2;
    cout<< first << " "<< sec << endl;
    

    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout<< *ptr << " "<< f << " " << p << endl;
    

    int arr[5];
    int*p;
    cout<< sizeof(arr) << " "<< sizeof(p) << endl;
    
    int arr[5] = {11 , 21 , 13 , 14};
    cout<<*(arr) << " "<< *(arr + 1) <<endl;


    int arr[5] = {11 , 21 , 13 , 14};
    cout<< arr << " "<< &arr <<endl;
 

  int arr[5] = {11 , 21 , 13 , 14};
  cout<< arr << " "<< (arr + 1) <<endl;
 

   int arr[5] = {11 , 21 , 13 , 14};
   int *p = arr;
   cout<< p[2] << endl;


   int arr[7] = {11 ,12 ,13 , 14 , 15 ,16 ,17 };
   cout<<*arr << " "<< * (arr + 3) << endl;

    

    int arr[] = {11 ,21 , 31 , 41};
    int *ptr = arr++;
    cout<< *ptr << endl;
    


    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout<< *ptr << endl;
    

    char arr[] ="ABCDE";
    char *ptr = &arr[0];
    cout<< ptr << endl; 
    


    char arr[] ="ABCDE";
    char *ptr = &arr[0];
    ptr++;
    cout<< ptr << endl;
    

    char str[] = "arslan";
    char *p = str;
    cout<<  str[0] << " " << p[0] << endl;
    

    int i = 10;
    update(&i);
    cout<< i << endl;
    


    // DOUBLE POUNTER 

   int first = 10;
   int *p = &first;
   int **q = &p;
   int second = 20;
   *q = &second;
   (*p)++;
   cout<<first << " "<< second << endl;

   int first = 100;
   int *p = &first;
   int **q = &p;
   int second = ++(**q);
   int *r = *q;
    ++(*r);
   cout<< first << " " << second << endl;
   

   int arr[] = {41 , 52 , 36 , 74};
   int *p = (arr + 1);
   cout<< *p << endl;
   cout<< *arr + 8 << endl;
   

   char *p ;
   char str[]= "pqrstuv";
   p = str;
   p+= 3;
   cout<< p << endl;
   

   char arr[20];
   int i;
   for(int i =0; i< 10; i++){
    *(arr + i) = 65 +i;

   }
   (arr +  i ) = '\0';
   cout<< *arr << endl;
   

   float arr[5] = {12.5 , 10.0 ,13.5 , 90.5 ,.5};
   float *ptr1 = &arr[0];
   float *ptr2 = ptr1 +3;
   cout<< " Ptr2 is "<< *ptr2 <<endl;
   int ans = ptr2 - ptr1;

   cout<< ptr2<< " " <<  ptr1  << endl;
   cout<< " Answer is  "<<  ans  << endl;
   

   char st[] = "ABCD";
   for(int i = 0; st[i] != '\0';i++){
    cout<< st[i] << *(st) + i <<*(st + i ) << i[st] << endl;
   }
   





    return 0;

}