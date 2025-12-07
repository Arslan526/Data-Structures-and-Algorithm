#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int print(int * arr , int n){
    for(int i =0; i<n;i++){
        cout<<arr[i] <<" ";
    }cout<<endl;
}
void reverse(int * arr , int n ){
    int s  =0;
    int e = n -1;
    while(s <= e){
        swap(arr[s++] , arr[e--]);
    }
}
void swapAlternate(int * arr , int n){
    int i = 0;
    while(i < n){
        if(i +1 < n){
            swap(arr[i] , arr[i+1]);
            i =+ 2;
        }
    }
}
int unique(int * arr , int n ){
    int ans =0;
    for(int i =0; i<n;i++){
        ans = ans^ arr[i];
    }
    return ans;
}
bool uniqueOccNumber(int * arr , int n){
    for(int i =0;i<n;i++){
        if(arr[i] == n){
            return true;
        }
    }
    return false;
}
void intersection(int* arr1 , int n ,int * arr2 , int m ){
    int i = 0, j = 0;
    while(i<n && j <m){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i] <<" ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }

   
}
bool pairSum(int * arr , int n , int sum){
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i] + arr[j] == sum){
                return true;
            }
            else{
                return 0;
            }
        }
    }
   
}
void sort01(int * arr , int n){
    int s = 0;
    int e = n -1;
    while(s <e){
        while(arr[s] == 0 && s < e){
            s++;
        }
        while(arr[e] == 1 && s < e){
            e--;
        }
        
        if(s < e){
            swap(arr[s++] , arr[e--]);
        }
    }
       
}
void sort012(int *arr ,int n ){
    int i =0;
    int next = 0;
    int nexttwo = n -1;
    while(i <= nexttwo){
        if(arr[i] == 0){
            swap(arr[i] , arr[next]);
            i++;
            next++;
        }
        else if(arr[i] == 2){
            swap(arr[i] , arr[nexttwo--]);
        }
        else{
            i++;
        }
    }
}
int firstOcc(int *arr , int n , int key){
    int s  = 0;
    int e = n -1;
    int mid = s + (e -s )/2;
    int ans  = -1;
    while(s <= e){
        if(arr[mid] == key){
           ans = mid;
           e =  mid -1;
        }
        else if(arr[mid] < key){
            s  = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e -s) /2;

    }
    return ans;
}

int LastOcc(int *arr , int n , int key){
    int s  = 0;
    int e = n -1;
    int mid = s + (e -s )/2;
    int ans  = -1;
    while(s <= e){
        if(arr[mid] == key){
           ans = mid;
           s = mid +1;
        }
        else if(arr[mid] < key){
            s  = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e -s) /2;

    }
    return ans;
}
int peakElement(int * arr , int n ){
    int s = 0;
    int e  = n  - 1;
    int mid = s + (e -s)/2;

    while(s <= e){
        if(arr[mid] < arr[mid +1]){
            s = mid  + 1;
        }
        else{
            e  = mid;
        }
        mid = s + (e -s)/2;

    }
    return s;
}

int  pivotElemet(int * arr , int n ){
    int s = 0;
    int e  = n  - 1;
    int mid = s + (e -s)/2;

    while(s <= e){
        if(arr[mid] >= arr[0]){
            s = mid  + 1;
        }
        else{
            e  = mid;
        }
        mid = s + (e -s)/2;

    }
    return s;
}
int sqrtOfBinary(int n){
    int s = 0;
    int e = n;
    long long mid =  s + (e -s) /2;
    int ans =  -1;
    while(s <= e){
        long long squre = mid * mid;
        if(squre ==  n){
            return mid;
            if(squre < n){
                s = mid + 1;
                ans =  mid ;
            }
            else{
                e = mid -1;
            }
            mid =  s + (e -s)/2;
        }
    }
    return ans;
}
void margeSortArray(int *arr1 , int n , int * arr2 , int m ,  int * arr3  ){
    int i =0;
    int j =0;
    int k =0;
    while(i < n && j < m){
        if(arr1[i]< arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i < n){
         arr3[k++] = arr1[i++];
    }
    while(j < m){
         arr3[k++] = arr2[j++];
    }
}
void movesZero(int * arr , int n ){
    int i =0;
    for(int j =0; j <n;j++){
        if(arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
    }
}
bool CheckSortedRotate(int * arr , int n){
    int count =0;
    for(int  i =0; i<n;i++){
        if(arr[i - 1]> arr[i]){
            count++;
        }
    }
    if(arr[n -1]> arr[0]){
        count++;
    }
    return count <= 1;
}


void printSubsetSum(int index , int n , int * arr , int tar ,vector<int>&subset){
    if(tar == 0){
        cout<<"[";
        for(int i = 0; i<subset.size(); i++){
            cout<<subset[i]<< " ";
        }
        cout<<"]";
        return;
    }
    if(index ==n ){
        return;
    }
    printSubsetSum(index+1 , n , arr , tar , subset);
    if(arr[index] <= tar){
        subset.push_back(arr[index]);
        printSubsetSum(index +1 , n, arr , tar -  arr[index] , subset);
       subset.pop_back();
    }
}
int main(){
    int arr[4] = {4 , 8 , 7 ,4};
    int n  = 4;
    // int sum  = 50;
    swapAlternate(arr , n);
    print(arr , n);
    // vector<int>subset;
    // cout<<"Output : "<< endl;
    // printSubsetSum(0 , n , arr ,sum, subset);
    // cout<<endl;
   

    /*int arr[6] = {5 , 3 ,8 , 2,9 ,1};
    int ans = CheckSortedRotate(arr , 6);
    if(ans){
        cout<<"It is Given Array is Sorted &  Rotated"<< endl;
    }
    else{
        cout<<"It Not is Given Array is Sorted & Rotated"<< endl;

    }

    int arr[7] = {12 , 0 , 2 , 0 , 9 ,0 , 0};
    movesZero(arr , 7);
    print(arr , 7);
    /*int arr1[3] = {9 , 12 ,34};
    int arr2[5] = {2, 4 ,5,21 ,13};
    int arr3[8] = {0};
    margeSortArray(arr1, 3, arr2,5, arr3);
    print(arr3 , 8);
    
    /*vector<int>v;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(11);
    v.push_back(10);
    v.push_back(12);
    cout<<"size of : "<<v.size()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<"Before Pop "<<endl;
    for(auto i : v){
        cout<< i << " ";
    }cout<<endl;
    v.pop_back();
    v.pop_back();
    cout<<"After Pop "<< endl;
    for(auto i : v){
        cout<< i <<" ";
    }cout<<endl;
    

    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int ans  =  sqrtOfBinary(n);
    cout<<"SQRT of Bianry Search : "<< ans << endl;
    int arr[17] = {1,12,13,0,21,31,0,0,1 ,2,1,2,2,1,2,1,2};
    int n = 17;
    sort(arr  , arr + n);
    int key = 1;
    cout<<"First index of Occ element : "<< firstOcc(arr , n , key) <<endl;
    cout<<"Last index of Occ  element : "<< LastOcc(arr  , n , key) <<endl;
    cout<<"Pivot Element of Binary Seea : "<< pivotElemet(arr , n) <<endl;
    print(arr, n);
    

    int sum = 10;
    int ans = pairSum(arr1 , n , sum);
    if(sum){
        cout<<"Sum is Present "<<endl;
    }
    else{
        cout<<"Sum is not Present"<<endl;
    }

    sort(arr1 , arr1+ n );
    print(arr1 , n);
    int arr2[10] = {2 , 8 , 1, 9 ,3 , 1,3,1 , 81,19};
    int n1 =10;
    sort(arr2 , arr2 +n1);
    print(arr2 , n1);
    cout<<"Intersection is : "<<endl;
    intersection(arr1 , 10 , arr2 , 10); 
    
    
    int num  = 10;
    int ans = uniqueOccNumber(arr  , 10);
    if(ans){
        cout<<"Unique number "<<endl;
    }
    else{
        cout<<"Not a unique number "<< endl;
    }

    //cout<<"Unique number : "<< unique(arr , 10)<<endl;

    swapAlternate(arr  , num);
    print(arr , num);
    reverse(arr , num);
    print(arr , num);
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    int count =0;
    while(num != 0){
     if(num & 1){
        count++;
        cout<<num <<endl;
    }
    num = num>>1;
    }
    //cout<<"number : "<<num <<endl;
    cout<<"The value of count "<<count <<endl;*/
}