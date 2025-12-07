#include<iostream>
using namespace std;
bool Matrix(int arr[][4], int n  , int m){
     int count = 0;
   
    
  for(int row = 0; row<n;row++ ){
    for(int  col = 0;  col<m;  col++){
       if(arr[row][col] !=0){
        count++;
       }
    }
    
  }
  if(n * m >= n * m/2){
    return true;
  }
  else
  {
    return false;
  }
}
int Comp(int arr[][4], int n , int m ){
    int k = 0;
   
      for(int row = 0; row<n;row++ ){
       for(int  col = 0;  col<m; col++)
        if(arr[row][col] != 0){
        arr[0][k] = row;
        arr[1][k] = col;
        arr[2][k] = arr[row][col];
        k++;
        }
    }
   return k;
  
}
void Print(int arr[][4], int n , int m){
     
    for(int row = 0; row<n;row++ ){
    for(int  col = 0;  col<4;  col++)
    {
     cout<<arr[row][col]<<" ";
    }
    }
}
void DegreRatate(int arr[][4] , int n , int m ){
  for(int i = n -1;i>=0;i--){
    for(int j =  m -1;j>=0; j--){
      cout<<arr[i][j] <<" ";
    }
    cout<<endl;
  }
 
}
int main() {
    int arr[3][4];
  cout<<"Enter a row and col number is "<< endl;
     for(int row = 0; row<3;row++ ){
    for(int  col = 0;  col<4;  col++){
        cin>>arr[row][ col];
    }
  }

  if(Matrix(arr , 3 , 4))
  {
    cout<<"It is a saprse matrix "<< endl;
  }
  else{
    cout<<"It is a Not saprse matrix "<< endl;
  }
  Comp(arr , 3 , 4);
  DegreRatate(arr , 3 , 4);
  //Print(arr ,3 , 4);
    return 0;
}