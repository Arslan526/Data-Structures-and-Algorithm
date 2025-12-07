#include<iostream> 
using namespace std;
int FirstOcc(int *arr , int n , int key){
  int s = 0;
  int e = n -1;
  int mid = s + (e -s )/2;
  int ans = -1;
  while(s <= e){
    if(arr[mid] == key){
      ans =  mid;
      e = mid-1;
    }
    else if(key > arr[mid]){
      s = mid+1;
    }
    else{
      e =  mid -1;
    }
    mid = s + (e -s )/2;
  }
  return ans;
}

int LastOcc(int * arr , int n  , int key){
   int s = 0;
  int e = n -1;
  int mid = s + (e -s )/2;
  int ans = -1;
  while(s <= e){
    if(arr[mid] == key){
      ans =  mid;
      s =  mid +1;
    }
    else if(key > arr[mid]){
      s = mid+1;
    }
    else{
      e =  mid -1;
    }
    mid = s + (e -s )/2;
  }
  return ans;
}
  int main(){
  int arr[12] = {1, 4, 6 ,7 , 8 , 9 , 10 ,11 ,12 ,13 ,14,15};
  int First = FirstOcc(arr , 12 , 12);
  int Last = LastOcc(arr , 12 , 12);
  cout<<"Total number of Occ "<< ((Last - First ) + 1)<<endl; 
  cout<<"First occ "<<FirstOcc(arr , 12 , 12)<< endl;
  cout<<"Last occ "<<LastOcc(arr ,12 , 12) << endl;
}