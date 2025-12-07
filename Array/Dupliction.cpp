#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int findDupliction(int * arr , int n){
    int ans  =0;
    for(int i =0; i<n;i++){
        ans = ans^arr[i];
    }

    for(int i = 1;i<n;i++){
        ans =  ans ^ i;
    }
    return ans;
   
}
int SingleElement(int * arr , int n){
    sort(arr , arr + n);
    int index = 0;
    for(int i = 0;i<n; i++){
        if(arr[i-1] != arr[i] &&  arr[i +1] != arr[i]){
             index = arr[i];
             break;
        }
    }
}
// int findDupliction3(int * arr , int n){
//     int slow = arr[0];
//     int fast = arr[0];

//     do{
//         slow = arr[slow];
//         fast = arr[arr[fast]];

//     }while(slow != fast);

//     slow = arr[0];
//     while(slow != fast){
//         slow = arr[slow];
//         fast = arr[fast];
//     }
//     return slow;
// }

// int findDupliction4(int * arr , int n ){
//     unordered_set<int>s;

//     for(int i =0; i<n;i++){
//         if(s.find(i) != s.end()){
//             return i;
//         }
//     }
//     return -1;
// }
// int SingleElement1(int * arr , int n){
//     sort(arr , arr + n);
//     int s = 0;
//     int e = n -1;
//     if(n == 1) return arr[0];

//     while(s <= e){

//         int mid =  s + (e -s)/2;

//         if(mid  == 0 && arr[0] != arr[1]){
//              return mid;
//         }

//         if(mid ==n -1 && arr[n-1]==arr[n]){
//              return arr[mid];
//         }

//         if(arr[mid -1]  != arr[mid] && arr[mid] != arr[mid+1]) {
//             return mid;
//         }

//        if(mid % 2 == 0){ // Even

//         if(arr[mid -1] == arr[mid]){ // left
//             e = mid -1;
//         }
//         else{
//             s = mid +1;
//         }
//        }
//        else{ // odd
//            if(arr[mid -1] == arr[mid]){  // right
//                 s =  mid +1;
//            }
//            else{
//             e = mid -1;
//            }
//        }

//     }
//     return -1;
// }
int main(){
    int arr[10] = {3 , 5 , 4 , 4 , 3 , 6 , 7 , 8 , 5 , 7};
    cout<<"Single Element "<<endl;
     cout<<SingleElement(arr , 10);
     
    return 0;

}



