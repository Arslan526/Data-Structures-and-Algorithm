#include<iostream>
#include<algorithm>
using namespace std;

void print(int * arr , int n){
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void SwapAtternate(int * arr , int n ){
    for(int i =0; i<n;i+=2){
        if(i +1 < n){
            swap(arr[i] , arr[i+1]);
        }
    }
}
int first(int * arr ,int n , int key){
    int s= 0;
    int e =n -1;
    int mid = s + (e - s) /2;
    int ans = -1;
    while(s <=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid ]< key){
            s = mid +1;
        }
        else{
            e =mid-1;
        }
         mid = s + (e - s) /2;
    }
    return ans;
}

int last(int * arr ,int n , int key){
    int s= 0;
    int e =n -1;
    int mid = s + (e - s) /2;
    int ans = -1;
    while(s <=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid +1;
        }
        else if(arr[mid ]< key){
            s = mid +1;
        }
        else{
            e =mid-1;
        }
         mid = s + (e - s) /2;
    }
    return ans;
}
int findPivot(int * arr , int num ){
    int s = 0;
    int e = num -1;
    int  mid = s + (e - s) /2;
    while(s <= e){
        if(arr[mid]>=arr[0]){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e - s) /2;
    }
    return s;
}
void movesZero(int *arr , int n){
    int i = 0;
    for(int j = 0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[j] ,arr[i] );
            i++;
        }
    }
}
int main(){
    int arr[9] = {1,4,0, 8,0 ,0, 9 , 0 , -1};
    int num = 9;
    //SwapAtternate(arr , num);
    sort(arr , arr + num);
    print(arr , num);
    cout<<"First Index of Occurance :"<< first(arr , num , 0)<<endl;
    cout<<"Last Index of Occurance :"<< last(arr , num , 0)<<endl;
    cout<<"Piovt index of Binary S :"<<findPivot(arr , num) <<endl;
    
    cout<<"Moves Zero : "<<endl;
    movesZero(arr ,num);
    print(arr , num);
    return 0;
}