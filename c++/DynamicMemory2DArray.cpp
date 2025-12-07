#include<iostream>
using namespace std;
int main(){

    int n;
    /*cout<<"Enter a 2D Array size" <<endl;
    cin>> n;
    //creating a 2D array
    int **arr = new int*[n];
   
    for(int i = 0; i<n; i++){
        arr[i] = new int[n];
    }
    // taking a input 
    cout<<"Enter a row and colume "<< endl;
    for(int i =0; i< n ; i++){
        for(int j = 0 ; j< n; j++){
            cin>>arr[i][j];
        }
    }cout<< endl;
      for(int i = 0; i< n ; i++){
        for(int j = 0; j< n; j++){
            cout<< arr[i][j] <<" ";
        }
    }cout<< endl;
    */


    // Deffrence row and col 
    int row;
    cout<<"Enter the row number" << endl;
    cin>> row;
    int col;
    cout<<"Enter tne col number "<< endl;
    cin>>col;
    int **arr = new int*[row];
    for(int i = 0; i< row ; i++){
        arr[i] = new int[col];
    }
    cout<<"Enter the row and column "<< endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j< col; j++){
            cin>>arr[i] [j];
        }
    }cout<< endl;
    

    for(int i = 0; i< row; i++){
        for(int j = 0; j< col;j++){
            cout<< arr[i][j]<<" ";
        }
    }cout<< endl;

    return 0;
}