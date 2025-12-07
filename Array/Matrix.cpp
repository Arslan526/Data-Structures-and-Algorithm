#include<iostream>
#include<climits>
using namespace std;
void ROWSUM(int  arr[][4] , int n , int m ){
  for(int i = 0; i< n; i++){
    int sum = 0;
    for(int j =0; j< m; j++){
      sum += arr[i][j];
    }
  cout<<"SUM Of Row wise "<< sum << endl;
  }
}
void COLSUM(int  arr[][4] , int n , int m ){
  for(int i = 0; i< n; i++){
    int sum = 0;
    for(int j =0; j< m; j++){
      
      sum += arr[j][i];
    }
   cout<<"SUM Of Column wise "<< sum << endl;
  }
}

int LargestRowSum(int arr[][4] , int n ,int m ){
     int maxi = INT_MIN;
     int rowIndex = -1;
    for(int i = 0; i< n; i++){
    int sum = 0;
    for(int j =0; j< m; j++){
      
      sum += arr[j][i];
    }
     if(sum > maxi){
      maxi = sum;
      rowIndex = i;
     }
  }
  
  return rowIndex;
}

int PrintWAVE(int arr[][4] , int n  , int m ){
  int ans = 0;
  int j = 0;
  for(int i = 0; i< n; i++){
      if( i & 1){
        for(int row = n - 1 ; row>= 0;i--){
          return ans;
        }
      }
      else{
        for(; j<n; j++){
          return ans;
        }
      }
      cout<< arr[i][j]<<" ";
    }
    return ans;
}
int main(int argc, const char** argv) {
    int arr[3][4];
  cout<<"Enter a row and col number is "<< endl;
     for(int row = 0; row<3;row++ ){
    for(int  col = 0;  col<4;  col++){
        cin>>arr[row][ col];
    }
  }
  //ROWSUM(arr , 3 ,4);
  //COLSUM(arr , 3 ,4);
  //int sum = LargestRowSum(arr , 3 , 4);
  //cout<<"Maximum sum row wis "<< sum << endl;
  PrintWAVE(arr , 3 , 4);
  return 0;
}