#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<vector<int>>arr , int n , int m){
  for(int i =0; i<n;i++){
    for(int j =0; j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
void printLikeWave(vector<vector<int>>arr , int n , int m){
  for(int col = 0; col<m;col++){
    if(col & 1){
      for(int row =  n -1; row >=0; row--){
        cout<<arr[row][col] <<" ";
      }
      cout<<endl;

    }
    else{
      for(int i = 0; i < n; i++){
        cout<<arr[i][col]<<" ";
      }
      cout<<endl;

    }
  }
} 

void SpiralPrint(vector<vector<int>> arr) {
    int n = arr.size();
    int m = arr[0].size();
    int sRow = 0, sCol = 0, eRow = n - 1, eCol = m - 1;

    int count = 0;
    int total = n * m;

    while (count < total) {
        // Print starting row
        for (int i = sCol; count < total && i <= eCol; i++) {
            cout << arr[sRow][i] << " ";
            count++;
        }
        cout<<endl;
        sRow++;

        // Print ending column
        for (int i = sRow; count < total && i <= eRow; i++) {
            cout << arr[i][eCol] << " ";
            count++;
        }
        cout<<endl;
        eCol--;

        // Print last row
        for (int i = eCol; count < total && i >= sCol; i--) {
            cout << arr[eRow][i] << " ";
            count++;
        }
        cout<<endl;
        eRow--;

        // Print starting column
        for (int i = eRow; count < total && i >= sRow; i--) {
            cout << arr[i][sCol] << " ";
            count++;
        }
        cout<<endl;
        sCol++;
    }
}

void RotateMatrix(vector<vector<int>>& arr) {
    int n = arr.size();
    int m = arr[0].size();

    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < m; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(arr[i].begin(), arr[i].end());
    } 
}


int main(){
  vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
  int n = arr.size();
  int m = arr[0].size();
  cout<<"Print a Like a Wave matrix" <<endl;
  printLikeWave(arr , n , m);
  cout<<"Simple matrix"<<endl;
  print(arr , n , m);
 
  cout<<"Sperail Print"<<endl;
  SpiralPrint(arr);
  cout<<"Rotate Matrix by 90 degree"<<endl;
  RotateMatrix(arr);
  print(arr , n , m);
  return 0;
}